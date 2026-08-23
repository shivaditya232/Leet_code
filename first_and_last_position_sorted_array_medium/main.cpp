#include<iostream>
using namespace std;
int main(){
    vector<int> nums={5,7,7,8,8,10};
    vector<int> ans={-1,-1};
    int target=9;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            if(mid!=0){
                if(nums[mid-1]<target){
                    ans[0]=mid;
                    break;
                }
                else{
                    high=mid-1;
                }
            }
            else{
                ans[0]=mid;
                break;
            }
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    low=0;
    high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            if(mid!=nums.size()-1){
                if(nums[mid+1]>target){
                    ans[1]=mid;
                    break;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                ans[1]=mid;
                break;
            }
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}