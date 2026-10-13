class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = INT_MIN;
        int n = height.size();
        int l = 0;
        int r = n-1;
        while(l < r){
            int curr_water = (r - l) * min(height[r], height[l]);
            max_water = max(curr_water, max_water);
            if(height[r] > height[l]){
                l++;
            }else{
                r--;
            }
        }

        return max_water;
    }


};