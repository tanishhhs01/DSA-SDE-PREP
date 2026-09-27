class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max1 = INT_MIN;
        int sum = 0;
        for(int i =0;i < nums.size();i++) {
            if(sum < 0) sum = 0;
            sum = sum + nums[i];
            max1 = max(max1,sum);
        }
        return max1;
    }
};