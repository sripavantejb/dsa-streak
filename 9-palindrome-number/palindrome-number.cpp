class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }

        long long  r = x;
        long long rev =0;
        while(x > 0)
        {
         int last_digit = x%10;
          x = x/10;
          rev = (rev*10) + last_digit;
        }

        return r == rev;
        
    }
};