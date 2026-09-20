class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char, int> mpp;
        int length = 0;
        int max_length = 0;
        int r = 0;
        int l = 0;
        while(r < n) {
            if(mpp[s[r]] == 0) {
                // Character not present
                mpp[s[r]]++;
                length = r - l + 1;
                max_length = max(length,max_length);
                r++;
            } else {
                // Character already exists
                mpp[s[l]]--;
                l++;
            }
        }

        return max_length;
    }
};