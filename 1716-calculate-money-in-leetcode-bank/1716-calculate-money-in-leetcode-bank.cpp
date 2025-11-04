class Solution {
public:
    int totalMoney(int n) {
        int day = n%7;
        int week = n/7;

        int days = 0;
        
        for(int i = 0; i < day; i++) days += (i + week + 1);
        int weeks = (week * (week - 1) / 2);
        
        
        return (week*28) + (7 * weeks) + days;
    }
};