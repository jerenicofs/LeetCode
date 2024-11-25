class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> mag;
        for(int i = 0; i < magazine.size(); i++){
            mag[magazine[i]]++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            if(mag.find(ransomNote[i]) == mag.end()) return false;
            mag[ransomNote[i]]--;
            if(mag[ransomNote[i]] == -1) return false;
        }
        return true;
    }
};