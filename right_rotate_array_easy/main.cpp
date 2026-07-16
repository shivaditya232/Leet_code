class Solution {
    void reverse(vector<int>& nums, int l, int r){
        while(l < r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
public:
    void rotate(vector<int>& nums, int n) {
        n = n % nums.size();
        reverse(nums, 0, nums.size()-1-n);         
        reverse(nums, nums.size()-n, nums.size()-1); 
        reverse(nums, 0, nums.size()-1);        
    }
};