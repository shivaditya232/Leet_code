class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: find the break point (from the right)
        int ind = -1;
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        
        // Step 2: if no break point found, the whole array is the last permutation
        // just reverse it to get the smallest (first) permutation
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // Step 3: find the smallest element in the suffix that's still greater than nums[ind]
        for(int i = n-1; i > ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        
        // Step 4: reverse the suffix after ind (guaranteed to be decreasing at this point)
        reverse(nums.begin()+ind+1, nums.end());
    }
};