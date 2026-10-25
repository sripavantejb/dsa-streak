class Solution {
public:


    long long atmost(vector<int>arr, int k){
        if(k < 0){
            return 0;
        }

        int n = arr.size();
        int l = 0;
        int r = 0;
        int sum = 0;
        long long count = 0;
        for(int r = 0; r<n; r++){
            sum += arr[r];
            while(sum > k){
                sum -= arr[l];
                l++;
            }
            count += r - l + 1;
        }
        return count;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums, goal) - atmost(nums, goal-1);
    }
};