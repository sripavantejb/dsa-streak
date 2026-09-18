class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int, int> mpp;

        // Store frequency of elements in arr1
        for (int x : arr1) {
            mpp[x]++;
        }

        vector<int> ans;

        // Add elements according to arr2 order
        for (int x : arr2) {

            if (mpp.find(x) != mpp.end()) {

                int freq = mpp[x];

                while (freq > 0) {
                    ans.push_back(x);
                    freq--;
                }

                // Remove so it won't be added again
                mpp.erase(x);
            }
        }

        // Store remaining elements
        vector<int> remaining;

        for (auto x : mpp) {

            int freq = x.second;

            while (freq > 0) {
                remaining.push_back(x.first);
                freq--;
            }
        }

        // Remaining elements in ascending order
        sort(remaining.begin(), remaining.end());

        // Add remaining elements
        for (int x : remaining) {
            ans.push_back(x);
        }

        return ans;
    }
};