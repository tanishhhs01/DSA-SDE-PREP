class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        stack<int> st;
        int cnt = 0;
        for(int i = 0;i < s.size();i++) {
            st.push(s[i]);
            if(st.find(s[i]) != st.end()) cnt++;
            else continue;
        }
        return cnt;
    }
};