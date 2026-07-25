#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {10,22,12,3,0,6};
    int n = nums.size();
    vector<int> result;
    
    int maxFromRight = nums[n-1];
    result.push_back(maxFromRight);
    
    for(int i = n-2; i >= 0; i--){
        if(nums[i] > maxFromRight){
            maxFromRight = nums[i];
            result.push_back(maxFromRight);
        }
    }
    
    // reverse manually using two pointers, since you know this trick well by now
    int l = 0, r = result.size()-1;
    while(l < r){
        swap(result[l], result[r]);
        l++;
        r--;
    }
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    
    return 0;
}