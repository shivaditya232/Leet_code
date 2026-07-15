#include<vector>
using namespace std;
class Solution {
public:
    void check(vector<int>& nums,int n) {
        vector<int> temp(nums.size());
        n=n%nums.size();
        for(int i=0;i<nums.size();i++){
            if(i-n>=0){
                temp[i-n]=nums[i];
            }
            else{
                temp[nums.size()-n+i]=nums[i];
            }
        }
    }
};