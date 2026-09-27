class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long XORR = 0;
        for(int i =0;i < nums.size();i++) {
            XORR = XORR ^ nums[i];
        }
        int rightmost = (XORR & XORR -1) & XORR;
        int b1;
        int b2;
        for(int i =0;i < nums.size();i++) {
            if(rightmost & nums[i]) {
                b1 = b1 ^ nums[i];
            }
            else {
                b2 = b2 ^ nums[i];
            }
        }
        vector<int> ans;
        ans.push_back(b1);
        ans.push_back(b2);
        return ans;
    }
};