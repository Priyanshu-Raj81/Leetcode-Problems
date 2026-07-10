class Solution {
public:
    string toHex(int num) {

        if(num == 0){
            return "0";
        }

        string digits = "0123456789abcdef";
        string result = "";
        unsigned int n = num;

        while(n>0){

            int remainder = n % 16;
            char ch= digits[remainder];
            result = result + ch;
            n = n / 16;
        }
        reverse(result.begin(), result.end());
        return result;

    }
};