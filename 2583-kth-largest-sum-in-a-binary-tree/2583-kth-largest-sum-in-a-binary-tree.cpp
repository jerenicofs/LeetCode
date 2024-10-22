/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        vector<long long> ans;
        queue<TreeNode*> que;

        que.push(root);
        while(!que.empty()){
            long long size = que.size();
            long long sum = 0;

            while(size){
                TreeNode* temp = que.front();
                que.pop();

                sum += temp->val;

                if(temp->left != NULL) que.push(temp->left);
                if(temp->right != NULL) que.push(temp->right);

                size--;
            }

            ans.push_back(sum);

        }

        sort(ans.begin(), ans.end(), greater<long long>());

        if(ans.size() < k) return -1;
        
        return ans[k - 1];


    }
};