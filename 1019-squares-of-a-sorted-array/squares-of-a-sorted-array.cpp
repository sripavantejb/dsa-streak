class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v(nums.size());
        int l = 0;
        int r = nums.size()-1;
        int k = nums.size()-1;
        while(l <= r){
            if(abs(nums[l]) > abs(nums[r])){
                v[k] = nums[l] * nums[l];
                l++;
            }else{
                v[k] = nums[r] * nums[r];
                r--;
            }
            k--;
        }
        return v;
    }
};