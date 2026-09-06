class Solution {
public:
    int myAtoi(string s) {

        long long num = 0;
        int sign = 1;
        int i = 0;
        
        //skip the spaces 
        while(i<s.size() && s[i] == ' '){
            i++;
        }
        
        //sign check 
        if(i<s.size() && s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(i<s.size() && s[i] == '+'){
            i++; 
        }
        
        //adding nums to int num as summing that digits 
        while(i<s.size() && isdigit(s[i])){
            num = num*10 + (s[i]-'0');
            
            //check the overflow of the integers 
            if(sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if(sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }
        return sign*num;
    }
};