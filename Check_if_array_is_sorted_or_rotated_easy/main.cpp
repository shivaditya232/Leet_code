#include<vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int length = nums.size();
        int count = 0;
        
        for(int i = 0; i < length; i++){
            int next = (i+1) % length;
            if(nums[i] > nums[next]){
                count++;
            }
        }
        
        return count <= 1;
    }
};