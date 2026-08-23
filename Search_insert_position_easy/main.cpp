#include<iostream>
using namespace std;
int main(){
    class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=target){
                ans=mid;
                high=high-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
    return 0;
}