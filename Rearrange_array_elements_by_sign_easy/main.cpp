#include<iostream>
using namespace std;
int main(){
    vector<int> nums={3,1,-2,-5,2,-4};
    int l=0;
    int r=0;
    int count=0;
    vector<int> result;
    while(count<nums.size()/2){

        while(l<nums.size()){
            if(nums[l]>0){
                result.push_back(nums[l]);
                l++;
                break;
            }
            l++;
        }

        while(r<nums.size()){
            if(nums[r]<0){
                result.push_back(nums[r]);
                r++;
                break;
            }
            r++;
        }
        count++;
    }
    return 0;
}