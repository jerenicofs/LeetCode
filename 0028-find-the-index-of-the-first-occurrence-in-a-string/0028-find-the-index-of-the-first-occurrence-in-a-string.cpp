class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // if(haystack.size() < needle.size()) return -1;

        // int i = 0;
        // int mark = 0;
        // int flag = 0;
        // int ct = 0;
        // int hay = 0;
        // while(i < needle.size() && hay < haystack.size()){
        //     if(needle[i] == haystack[hay]){
        //         if(flag == 0){
        //             mark = hay;
        //         }
        //         flag = 1;
        //         ct++;
        //         i++;
        //     }else if(needle[i] != haystack[hay] && flag == 1){
        //         return -1;
        //     }
        //     hay++;
        // }
        // cout << ct;
        // if(ct == needle.size()){
        //     return mark;
        // }else return -1;

        if (haystack.size() < needle.size()) return -1; 

        int i = 0; 
        int hay = 0; 
        int mark = 0; 

        while (hay < haystack.size()) {
            if (haystack[hay] == needle[i]) {
                if (i == 0) {
                    mark = hay; 
                }
                i++; 
                if (i == needle.size()) {
                    return mark; 
                }
            } else if (i > 0) {
                hay = mark; 
                i = 0; 
            }
            hay++; 
        }
        return -1; 
    }
};