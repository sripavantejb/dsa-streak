class Solution {
public:

    bool is_prime(int num){
        if(num < 2){
            return false;
        }
        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                return false;
                break;
            }
        }
        return true;
    }



    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>primes;
        for(int i=0; i<nums.size(); i++){
            if(is_prime(nums[i])){
                primes.push_back(i);
            }
        }
        int maxi = primes[primes.size()-1];
        int min = primes[0];

        return maxi-min;
        
    }
};