class Solution {
public:
    int characterReplacement(string s, int k) {
        int r = 0;
        int l = 0;
        int n = s.size();
        int max_len = INT_MIN;
        int maxFreq = INT_MIN;
        map<char,int>mpp;
        for(int r = 0; r<n; r++){
            mpp[s[r]]++;
            maxFreq = max(maxFreq, mpp[s[r]]);
            while((r-l+1) - maxFreq > k){
                mpp[s[l]]--;
                l++;
                // if(mpp[l] == 0){
                //     mpp.erase(s[l]);
                // }
            }
            max_len = max(max_len, r-l+1);
        }

    return max_len;

    }
};