class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        for(int i=0; i<weights.size(); i++){
            low = max(low,weights[i]);
        }
        int high = 0;
        for(int i=0; i<weights.size(); i++){
            high += weights[i];
        }

        int ans;

        while(low<=high){
            int sum = 0;
            int mid = low +(high-low)/2;
            int day = 1;

            for(int i=0; i<weights.size(); i++){
                if(sum+weights[i] <= mid){
                    sum += weights[i];
                }else{
                    sum = weights[i];
                    day++;
                }
            }
            if(day <= days){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
        
    }
};