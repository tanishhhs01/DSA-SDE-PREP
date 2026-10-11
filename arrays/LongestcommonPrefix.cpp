class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty()) return "";

        string ans = strs[0];

        for(int i = 1; i < strs.size(); i++) {

            int left = 0;
            int right = 0;

            while(left < ans.size() && right < strs[i].size()) {

                if(ans[left] != strs[i][right]) {
                    ans.erase(left);
                    break;
                }
                else {
                    left++;
                    right++;
                }
            }

            if(right == strs[i].size() && left < ans.size()) {
                ans.erase(left);
            }
        }

        return ans;
    }
};