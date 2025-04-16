#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> moveZeros(vector<int> &nums) {
    vector<int> temp{};
    int n = nums.size();

    for (int i = 0; i < n; i++) {
      if (nums[i] != 0) {
        temp.push_back(nums[i]); // pushing all elements of nums to temp
      }
    }
    // temp = {10,20,30}
    // nums = {10,0,0,20,30,0}
    int nt = temp.size();
    // now we push temp elements back to nums because we need to return the same
    // vector
    for (int i = 0; i < nt; i++) {
      nums[i] = temp[i];
    }

    for (int i = nt; i < n; i++) { //inserting zeros in the end.
      nums[i] = 0;
    }
    return nums;
  }
};

int main() {
  vector<int> nums = {10, 0, 0, 20, 30, 0}; // {10,20,30,0,0,0}->ans
  Solution s;// object instantiation.

  vector<int> res = s.moveZeros(nums);
  for(int i : res){
    cout<<i<<" ";
  }
  return 0;
}