class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }

        //now we'll have an map with the list of vals and freqs
        vector<pair<char,int>> v;

        for(auto x : mpp){
            v.push_back({x.first, x.second});
            }
            
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        string ans;
        for(auto x : v){
            for(int i=0; i<x.second; i++){
                ans += x.first;
            }
        }
        return ans;
    }
};