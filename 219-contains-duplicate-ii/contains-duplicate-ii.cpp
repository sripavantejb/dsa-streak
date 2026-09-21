class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int>mpp;
        for(int i=0; i<nums.size(); i++){
            if(mpp.find(nums[i]) != mpp.end()){
                return true;
            }else{
                mpp.insert(nums[i]);
                if(mpp.size() > k){
                    mpp.erase(nums[i-k]);
                }
            }
        }
        return false;
    }
};