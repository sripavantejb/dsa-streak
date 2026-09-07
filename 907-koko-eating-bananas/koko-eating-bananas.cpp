class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        // Find the maximum pile.
        // Maximum possible eating speed = max pile.
        int maxEle = 0;

        for(int i = 0; i < piles.size(); i++) {
            maxEle = max(piles[i], maxEle);
        }

        // Binary search range:
        // Minimum speed = 1
        // Maximum speed = maxEle
        int low = 1;
        int high = maxEle;

        int ans = maxEle;

        while(low <= high) {

            // Find middle eating speed
            int mid = low + (high - low) / 2;

            long long sum = 0;

            // Calculate total hours needed at speed 'mid'
            for(int j = 0; j < piles.size(); j++) {

                // Ceiling(piles[j] / mid)
                sum += ((long long)piles[j] + mid - 1) / mid;
            }

            // If Koko can finish within h hours,
            // this speed is possible.
            if(sum <= h) {

                // Store this as a possible answer
                ans = mid;

                // But we want the MINIMUM speed,
                // so search on the left side.
                high = mid - 1;
            }

            // If she needs more than h hours,
            // the speed is too slow.
            else {
                // Increase the speed.
                low = mid + 1;
            }
        }

        return ans;
    }
};