#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
int findMissingNumber(vector <int> &nums){
  int n = nums.size();
  int sum1 = 0;
  int sum2 = 0;

  sum1 = (n * (n + 1) / 2);

  for(int val : nums){
    sum2 = sum2 + val;
  }
  int missingValue = sum1 - sum2;
  
  return missingValue;
}
};

int main(){
  vector<int> nums ={0,1,2,3,4};

  Solution s;
  int result = s.findMissingNumber(nums);
  cout<<"Missing value is -> "<<result<<endl;
  return 0;
}