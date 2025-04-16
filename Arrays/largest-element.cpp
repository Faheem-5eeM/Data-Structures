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
        return maxi;

    }
};
int main(){
    vector<int> arr = {10,20,30,40};
    Solution s;
    int result = s.largestElement(arr);
    cout<<"largest element -> "<<result<<endl; 
    return 0;
}