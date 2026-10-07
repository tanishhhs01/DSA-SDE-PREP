class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        long ans = 0;
        bool sign = true;
        if(dividend < 0 && divisor > 0) sign = false;
        else if(dividend > 0 && divisor < 0) sign = false;
        long n = abs((long)dividend);
        long d = abs((long)divisor);
        while(n >= d) {
            int cnt = 0;
            while(n >= d<<(cnt+1)) {
                cnt++;
            }
            ans = ans + (1LL<<cnt);
            n = n - (d<<cnt);
        }
        if(ans >= 1LL<<31 && sign == true) return INT_MAX;
        else if(ans >= 1LL<<31 && sign == false) return INT_MIN;
        if(sign) return ans;
        else return -ans;
    }
};