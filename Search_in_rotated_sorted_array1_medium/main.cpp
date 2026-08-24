#include<iostream>
using namespace std;
int main(){
    vector<int> nums={2,1};
    vector<int> list={6,1,2,3,4,5};
    vector<int> list2={1,2,3,4,5,6};
    int low=0;
    int high=nums.size()-1;
    int shift;
    int target=5;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[low]>nums[mid]){
            high=mid;
            
        }
        else if(nums[high]<nums[mid]){
            low=mid+1;
        }
        else{
            shift=low;
            break;
        }
    }
    cout<<shift;
    low=0;
    high=nums.size()-1;
    if(shift!=0){
        if(nums[0]<=target && nums[shift-1]>=target){
            high=shift-1;

        }
        else{
        low=shift;
    }
    }
    
    int ans=-1;
    while(low<=high){
        int mid1=(low+high)/2;
        if(nums[mid1]==target){
            ans=mid1;
            break;
        }
        else if(nums[mid1]<=target){
            low=mid1+1;
        }
        else{
            high=mid1-1;
        }
    }
    cout<<ans;
    return 0;
}