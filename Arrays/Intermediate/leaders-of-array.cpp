#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums.back();  // for comapring.

        vector<int> ans{};  // to store end answer.

        if(nums.empty()){
            return ans;
        }

        ans.push_back(nums.back());  // last element is always a leader.

        for (int i = n - 2; i >= 0; i--) { //iterate from behind
            if(nums[i] >= maxi){
                ans.push_back(nums[i]); //push it to resultant vector.
                maxi = nums[i]; //update maximum.
            }
        }
        reverse(ans.begin() , ans.end()); //can also be sorted
        return ans;
    }
};

int main(){
    vector <int> nums =  {1, 2, 5, 3, 1, 2};
    Solution s;
    vector<int>result = s.leaders(nums);

    for(int num: result){
        cout<< num<<" "; 
    }
    
    return 0;
}