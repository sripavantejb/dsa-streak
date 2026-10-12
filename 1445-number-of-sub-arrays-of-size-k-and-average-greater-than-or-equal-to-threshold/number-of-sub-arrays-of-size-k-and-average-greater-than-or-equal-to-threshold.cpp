class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int curr_sum = 0;
        int max_sum = 0;
        int r = 0;
        int l = 0;
        int n = arr.size();
        int count = 0;
        while(r < n){
            if(r == 0){
                for(int i=0; i<k; i++){
                    curr_sum = curr_sum + arr[i];
                    r++;
                }
                if (curr_sum >= k * threshold) {
                    count++;
                }
            }
            else{
                curr_sum = curr_sum - arr[l] + arr[r];
               if(curr_sum >= k * threshold){
                    count++;
                }
                r++;
                l++; 
            }
        }
        return count;
    }
};