#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> RearrangeArrayBySign(vector<int> &nums) {
    int posIndex = 0;
    int negIndex = 1;
    int N = nums.size();
    //an vector to store answer which is of the same size as nums and all values to 0.
    vector<int> ans(N, 0);
    for (int i = 0; i < N; i++) {
      if(nums[i] < 0){
        ans[negIndex] = nums[i];
        negIndex = negIndex + 2;
      }
      else{
        ans[posIndex] = nums[i];
        posIndex = posIndex + 2;
      }
    }
    return ans;
  }
};

int main() {
  vector<int> nums{10, 20, -30, -40, 50, -60, -70, 80};
  Solution s;
  vector<int> ans = s.RearrangeArrayBySign(nums);

  for(int num: ans){
    cout<<num<<" ";
  }

  return 0;
}