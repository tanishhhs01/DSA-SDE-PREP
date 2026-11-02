class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mid = n /2;
        int target = (nums[n] + nums[mid]) - nums[0];
        return target - nums[0];
        
    }
};