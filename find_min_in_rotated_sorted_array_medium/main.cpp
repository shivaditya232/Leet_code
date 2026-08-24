#include<iostream>
using namespace std;
int main(){
    vector<int> nums={7,1,2,3,4,5,6};
    int shift;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[low]<=nums[mid] && nums[low]<=nums[high]){
            shift=low;
            break;
        }
        else if(nums[low]>=nums[mid]){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}