#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int needed=target-nums[i];
            if(hash.find(needed)!=hash.end()){
                return {hash[needed],i};
            }
            hash[nums[i]]=i;
        }
        return {};
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout << result[0] << " " << result[1];
    return 0;
}