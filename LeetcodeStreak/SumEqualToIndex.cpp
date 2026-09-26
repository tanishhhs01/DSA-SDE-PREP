class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       int n = nums.size();
        for(int i = 0;i < n;i++) {
            if(nums[i] <= 9) {
                if(nums[i] == i) return i;
            }
        
        int sum = 0;
        while(nums[i] != 0) {
            sum = sum + nums[i] % 10;
            nums[i] = nums[i] / 10;
        }
        if(sum == i) return i;
    }
    return -1;
    }
};