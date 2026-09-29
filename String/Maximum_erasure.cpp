class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
         int sum = 0;
        unordered_set<int> st;
        
        for(int right = 0;right < nums.size();right++) {
            int sum1 = 0;
            while(st.find(nums[right]) != st.end()) {
                st.erase(nums[left]);
                left++;
            } 
            st.insert(nums[right]);
        for(auto it : st) {
            sum1 = sum1 + it;
        }
        sum = max(sum,sum1);
           
        }
       
        
        return sum;
    }
};