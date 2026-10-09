class Solution {
public:
    int minInsertions(string s) {
        int cnt = 0;
        int need = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ')' && i + 1 < s.size() && s[i + 1] == ')') {
                if (cnt == 0) {
                    need++;
                } else {
                    cnt--;
                }
                i++;
            }
            else if (s[i] == '(') {
                cnt++;
            }
            else if (s[i] == ')') {
                if (cnt > 0) {
                    cnt--;
                    need++;
                } else {
                    need += 2;
                }
            }
        }

        need += 2 * cnt;
        return need;
    }
};