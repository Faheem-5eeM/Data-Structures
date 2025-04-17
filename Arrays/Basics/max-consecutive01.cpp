#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxConsecutiveCount(vector<int> &arr) {
        int cnt0 = 0;
        int cnt1 = 0;
        int maxC0 = 0;
        int maxC1 = 0;

        for(int i = 0;i<arr.size();i++){
            if(arr[i] == 1){
                cnt1++;
                maxC1 = max(maxC1 , cnt1);
            }
            else{
                cnt1 = 0;
            }
        }
          for(int i = 0;i<arr.size();i++){
            if(arr[i] == 0){
                cnt0++;
                maxC0 = max(maxC0 , cnt0);
            }
            else{
                cnt0 = 0;
            }
        }
        int ans = max(maxC1 , maxC0);
        return ans;
    }
};

int main(){
    vector<int> arr = {1,1,1,1,0,0,0};
    Solution s;
    int result = s.maxConsecutiveCount(arr);
    cout<<"maximum consecutivr value is -> "<<result<<endl; 
    return 0;
}