class Solution {
public:
    long divide(long dividend, long divisor) {
        long long divide = long(dividend) / long(divisor);

        if(dividend == -2147483648 && divisor == -1) return 2147483647;
        return long(divide);
    }
};
