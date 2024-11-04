class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, char> m;
        m[1] = 'I';
        m[5] = 'V';
        m[10] = 'X';
        m[50] = 'L';
        m[100] = 'C';
        m[500] = 'D';
        m[1000] = 'M';
        string res = "";

        while(num > 0){
            if(num >= 1000){
                num -= 1000;
                res += m[1000];
            }
            else if(num >= 900){
                num -= 900;
                res += m[100];
                res += m[1000];
            }
            else if(num >= 500){
                num -= 500;
                res += m[500];
            }
            else if(num >= 400){
                num -= 400;
                res += m[100];
                res += m[500];
            }
            else if(num >= 100){
                num -= 100;
                res += m[100];
            }
            else if(num >= 90){
                num -= 90;
                res += m[10];
                res += m[100];
            }
            else if(num >= 50){
                num -= 50;
                res += m[50];
            }
            else if(num >= 40){
                num -= 40;
                res += m[10];
                res += m[50];
            }
            else if(num >= 10){
                num -= 10;
                res += m[10];
            }
            else if(num >= 9){
                num -= 9;
                res += m[1];
                res += m[10];
            }
            else if(num >= 5){
                num -= 5;
                res += m[5];
            }
            else if(num >= 4){
                num -= 4;
                res += m[1];
                res += m[5];
            }
            else if(num >= 1){
                num -= 1;
                res += m[1];
            }
        }
        return res;
    }
};