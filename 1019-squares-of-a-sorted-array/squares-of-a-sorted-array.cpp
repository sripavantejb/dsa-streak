class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(auto n : nums){
            int sq = abs(n)*abs(n);
            v.push_back(sq);
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};