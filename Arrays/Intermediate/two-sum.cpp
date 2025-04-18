#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/* Function to find two indices in the array `nums`
       such that their elements sum up to `target`.
    */
    vector<int> twoSum(vector<int>& nums, int target) {

        // Map to store (element, index) pairs
        unordered_map<int, int> mpp; 

        // Size of the nums vector
        int n = nums.size(); 

        for (int i = 0; i < n; i++) {
             // Current number in the vector
            int num = nums[i];
             // Number needed to reach the target
            int moreNeeded = target - num;

            // Check if the complement exists in map
            if (mpp.find(moreNeeded) != mpp.end()) {
                /* Return the indices of the 
                two numbers that sum up to target*/
                return {mpp[moreNeeded], i};
            }

            // Store current number and its index in map
            mpp[num] = i;
        }

        // If no such pair found, return {-1, -1}
        return {-1, -1};
    }
};

int main() {
    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 14; 

    //create an instance of Solution class
    Solution sol;

    // Call the twoSum method from Solution class
    vector<int> ans = sol.twoSum(nums, target);

    // Print the result
    cout << "Indices of the two numbers that sum up to " << target << " are: [" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
