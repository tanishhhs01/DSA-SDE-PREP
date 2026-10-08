class Solution {
public:
    string removeOuterParentheses(string s) {
      int count1 = 0;
      int count2 = 0;
      string ans;
      for(int i = 0; i < s.size();i++) {
        if(s[i] == '(') count1++;
        else count2++;

        if(count1 == 1 && count2 == 0) continue;
        else if(count1 == count2) {
            count1 = 0; 
            count2 = 0; 
            continue;
        }
        ans.push_back(s[i]);
    }
       return ans;
    }
};