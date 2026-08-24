#include<iostream>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,3,5,6,7};
    if(nums.size()==1){
            return 0;
    }
    else if(nums[0]>nums[1]){
            return 0;
    }
    else if(nums[nums.size()-1]>nums[nums.size()-2]){
            return nums.size()-1;
    }
    int low=1;
    int high=nums.size()-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(nums[mid]>nums[mid-1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}