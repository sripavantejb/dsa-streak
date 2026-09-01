class Solution {
public:
    int beautySum(string s) {

        int ans = 0;
        for(int i=0; i<s.size(); i++){
            unordered_map<char,int>mpp;
            for(int j =i; j<s.size(); j++){
                mpp[s[j]]++;
                
                int maxi = 0;
                int mini = INT_MAX;

                for(auto m: mpp){
                    mini = min(mini, m.second);
                    maxi = max(maxi, m.second);
                }

                ans += maxi-mini;

            }
        }

        return ans;
    }
};