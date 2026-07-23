#include<iostream>
using namespace std;
int main(){
    int nums[]={4,3,2,7,8,2,3,1};
    int n=8;
    for(int i=0;i<n;i++){
    int val = abs(nums[i]);
    if(nums[val-1] > 0){
        nums[val-1] = -nums[val-1];
    }
}
vector<int> result;
for(int i=0;i<n;i++){
    if(nums[i] > 0){
        result.push_back(i+1);
    }
}
    return 0;
}