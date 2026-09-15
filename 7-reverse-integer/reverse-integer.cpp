class Solution {
public:
    int reverse(int x) {
        vector<int> digits;

        while (x != 0) {
            digits.push_back(x % 10);
            x = x / 10;
        }

        long long ans = 0;

        for (int i = 0; i < digits.size(); i++) {
            ans = ans * 10 + digits[i];
        }

        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }

        return ans;
    }
};