class Solution {
public:
    vector<int> psee(vector<int>& nums){
        stack<int> st;
        vector<int> arr(nums.size());
        for(int i = 0; i < nums.size(); i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            arr[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return arr;
    }
    
    vector<int> nse(vector<int>& nums){
        stack<int> st;
        vector<int> arr(nums.size());
        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            arr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return arr;
    }
    
    vector<int> pgee(vector<int>& nums){
        stack<int> st;
        vector<int> arr(nums.size());
        for(int i = 0; i < nums.size(); i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            arr[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return arr;
    }
    
    vector<int> nge(vector<int>& nums){
        stack<int> st;
        vector<int> arr(nums.size());
        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            arr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return arr;
    }
    
    long long calculateMin(vector<int>& nums){
        vector<int> p = psee(nums);
        vector<int> n = nse(nums);
        long long total = 0;
        for(int i = 0; i < nums.size(); i++){
            long long left = i - p[i];
            long long right = n[i] - i;
            total += left * nums[i] * right;
        }
        return total;
    }
    
    long long calculateMax(vector<int>& nums){
        vector<int> p = pgee(nums);
        vector<int> n = nge(nums);
        long long total = 0;
        for(int i = 0; i < nums.size(); i++){
            long long left = i - p[i];
            long long right = n[i] - i;
            total += left * nums[i] * right;
        }
        return total;
    }
    
    long long subArrayRanges(vector<int>& nums) {
        return calculateMax(nums) - calculateMin(nums);
    }
};