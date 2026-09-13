class Solution {
public:

    bool canSplit(vector<int>& nums, int maxSum, int k) {
        int currentSum = 0;
        int subarrays = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (currentSum + nums[i] <= maxSum) {
                currentSum += nums[i];
            }
            else {
                subarrays++;
                currentSum = nums[i];
            }

            if (subarrays > k)
                return false;
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());

        int high = 0;
        for (int x : nums) {
            high += x;
        }

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (canSplit(nums, mid, k)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};