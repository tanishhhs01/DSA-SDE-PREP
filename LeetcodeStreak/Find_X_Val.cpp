class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        int n = nums.size();
        int newrem = 0;
        vector<long long> result(k, 0);
         vector<long long> current(k, 0);
           for(int i = 0;i < n;i++) {
            vector<long long> next(k,0);
            next[nums[i] % k]++;
            for(int j = 0;j < k;j++) {
                if(current[j] == 0) {
                    continue;
                }
                newrem = (j * (nums[i] % k)) % k;
                
                next[newrem] = next[newrem] + current[j];
            }
            for(int r = 0; r < k;r++) {
                result[r] = next[r] + result[r];
            }
            current = next;
           }
           return result;
    }
};