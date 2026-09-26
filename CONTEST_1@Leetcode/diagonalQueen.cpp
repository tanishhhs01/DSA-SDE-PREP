class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int row = abs(source[0] - target[0]);
        int colm = abs(source[1] - target[1]);

        if (row == 0 && colm == 0) return 0;
        if (row == 0 || colm == 0 || row == colm) return 1;
        return 2;
    }
};