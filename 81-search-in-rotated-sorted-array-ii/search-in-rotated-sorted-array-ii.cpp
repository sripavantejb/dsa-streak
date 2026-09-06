class Solution {
public:
    bool search(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0; i<nums.size();i++){
            mpp[nums[i]]++;
        }
        if(mpp[target]){
            return true;
        }
        else{
            return false;
        }
    }
};