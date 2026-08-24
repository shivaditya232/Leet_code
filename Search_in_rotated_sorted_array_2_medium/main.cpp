#include<iostream>
using namespace std;
int main(){
    vector<int> nums={3,1};
    int target=1;
    bool ans=false;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            ans=true;
            break;
        }
        else if(nums[low]<=nums[mid]){
            if(target<=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target<=nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
    }
    cout<<ans;
    return 0;
}