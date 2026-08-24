#include<iostream>
using namespace std;
int main(){
    vector<int> nums={1,3,3,4,4};
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(mid-1>=0 && mid+1<nums.size()){
            if(nums[mid]==nums[mid-1]||nums[mid]==nums[mid+1]){
                if(mid%2==0){
                    if(nums[mid+1]!=nums[mid]){
                        right=mid-1;
                    }
                    else{
                        left=mid+1;
                    }
                }
                else{
                    if(nums[mid-1]!=nums[mid]){
                        right=mid-1;
                    }
                    else{
                        left=mid+1;
                    }
                }
            }
            else{
                cout<<mid;
                break;
            }
        }
        else{
            if(mid==0){
                if(nums[mid]!=nums[mid+1]){
                    cout<<mid;
                    break;
                }
            }
            else{
                if(nums[mid]!=nums[mid-1]){
                    cout<<mid;
                    break;

                }
            }
        }
    }
    return 0;
}