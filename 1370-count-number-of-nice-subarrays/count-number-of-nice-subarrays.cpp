class Solution {
public:

    int atmost(vector<int>& numbers, int k){
        long long r = 0;
        long long l = 0;
        long long nice = 0;
        long long n = numbers.size();
        long long count = 0;
    
        for(int r = 0; r<n; r++){
            count += numbers[r]%2;
            while(count > k){
                count -= numbers[l]%2;
                l++;
            }
            nice += r - l + 1;
        }
        return nice;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        
        return atmost(nums, k) - atmost(nums, k-1);
    }
};