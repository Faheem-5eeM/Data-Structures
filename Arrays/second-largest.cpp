#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = nums[0];

        for(int i=0;i<nums.size();i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        int secondmaxi = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] > secondmaxi && nums[i] != maxi){
                secondmaxi = nums[i];
            }
        }
        return secondmaxi;
    }
};
int main(){
    vector<int> arr = {10,20,30,40};
    Solution s;
    int result = s.largestElement(arr);
    cout<<"second largest element -> "<<result<<endl; 
    return 0;
}