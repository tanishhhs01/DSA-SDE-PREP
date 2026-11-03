class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i < n;i++) {
            sum = sum + nums[n-1] - nums[i];
        }
        return sum;
    }
};