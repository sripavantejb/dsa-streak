class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r = 0;
        int l = 0;
        int n = nums.size();
        int ones = 0;
        int zero_count = 0;
        int max_len = 0;

        for(int r = 0; r<n; r++){
            if(nums[r] == 0){
                zero_count++;
            }else{
                ones++;
            }

            while(zero_count > k){
                if(nums[l] == 0){
                    zero_count--;
                }else{
                    ones--;
                }
                l++;
            }
            max_len = max(max_len, r - l + 1);
        }
        return max_len;
    }
};