#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            nums[i - 1] = nums[i];
        }
        nums[nums.size() - 1] = temp;
    }
};

int main(){
    vector<int>nums{10,20,30,40,50};
    vector<int>ans{};

    Solution s;
    s.rotateArrayByOne(nums);
    for(int i: ans){
        cout<<i<<" ";
    }
}