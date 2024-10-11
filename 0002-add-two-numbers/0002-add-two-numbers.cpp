/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;
        ListNode *track;
        int over = 0;
        while(over != 0 || l1 || l2){
            int num1 = l1 ? l1->val : 0;
            int num2 = l2 ? l2->val : 0;

            int sum = num1 + num2 + over;
            over = sum / 10;
            sum %= 10;

            track = new ListNode(sum);
            curr->next = track;
            curr = curr->next;

            if(!l1)l1 = nullptr;
            else l1 = l1->next;

            if(!l2)l2 = nullptr;
            else l2 = l2->next;
        }

        return ans->next;

    }
};