#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if(arr.size() < 2){
            return -1;
        }
        int secondlargest = -1;
        sort(arr.begin() , arr.end());

        int largest = arr.back();

        for(int i = arr.size() - 2; i >= 0; i--){
            if(arr[i] != largest){
                secondlargest = arr[i];
                break;
            }
        }
        return secondlargest;

    }
};
int main(){
    vector<int> arr = {10,20,30,40};
    Solution s;
    int result = s.getSecondLargest(arr);
    cout<<"second largest element -> "<<result<<endl; 
    return 0;
}