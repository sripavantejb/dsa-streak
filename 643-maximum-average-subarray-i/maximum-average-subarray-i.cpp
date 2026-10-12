class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr_sum = 0;
        double max_sum = INT_MIN;
      int r = 0;
        int l = 0;
        int n = nums.size();
        while(r < n){
            if(r==0){
            for(int i=0; i<k; i++){
                curr_sum += nums[i];
                r++;
            }
            max_sum = curr_sum;
            }else{
            curr_sum = curr_sum - nums[l] + nums[r];
            max_sum = max(curr_sum, max_sum);
            r++;
            l++;
        }
        }
        double ans = max_sum/k;
        return ans;
    }
};