class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int r = 0;
        int l = 0;
        int max_len = INT_MIN;
        int n = fruits.size();
        map<int,int>mpp;
        for(int r=0; r<n; r++){
            mpp[fruits[r]]++;
            while(mpp.size() > 2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            int curr_len = r - l + 1;
            max_len = max(max_len, curr_len);
        }
        return max_len;
    }
};