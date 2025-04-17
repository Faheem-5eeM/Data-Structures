#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {10,20,30,40};
    int target = 30;

    Solution s;
    int result = s.linearSearch(arr, target);
    cout<<"Answer -> index "<<result<<endl; 
    return 0;
}