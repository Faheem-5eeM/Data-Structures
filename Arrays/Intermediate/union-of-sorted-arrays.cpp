#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> unionOfSortedArrays(vector<int> nums1, vector<int> nums2) {
    int n1= nums1.size();
    int n2= nums2.size();
    vector<int> unionArray{};

    set <int> st;

    for(int val : nums1){
      st.insert(val);
    }
    for(int val : nums2){
      st.insert(val);
    }
    for(auto it = st.begin(); it != st.end() ; ++it){
      unionArray.push_back(*it);    
    }
    return unionArray;
  }
};

int main() {
  vector<int>nums1 = {1,2,3,4};
  vector<int>nums2 = {2,3,5};

  Solution s;
  vector<int> res = s.unionOfSortedArrays(nums1, nums2);

  for(int val : res){
    cout<<val<<" ";
  }
  return 0;
}