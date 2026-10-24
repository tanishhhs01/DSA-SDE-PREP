class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);

        if (start > end) return 0;

        stringstream ss(start);
        int month = 0, day = 0;
        char h = 0;
        ss >> month >> h >> day;

        stringstream ss2(end);
        int month1 = 0, day1 = 0;
        char h1 = 0;
        ss2 >> month1 >> h1 >> day1;

        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        int start1 = 0;
        for (int i = 0; i < month - 1; i++) {
            start1 += days[i];
        }
        start1 += day;

        int end1 = 0;
        for (int i = 0; i < month1 - 1; i++) {
            end1 += days[i];
        }
        end1 += day1;

        return end1 - start1 + 1;
    }
};
