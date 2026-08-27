#include<iostream>
using namespace std;
int findMax(vector<int> nums){
    int max=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}
int calculateThreshold(vector<int> nums,int val){
    int threshold=0;
    for(int i=0;i<nums.size();i++){
        threshold+=ceil(double(nums[i])/val);
    }
    return threshold;
}
int main(){
    vector<int> nums={1,2,5,9};
    int threshold=6;
    int low=1;
    int high=findMax(nums);
    while(low<=high){
        int mid=(low+high)/2;
        if(calculateThreshold(nums,mid)<=threshold){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    return 0;
}