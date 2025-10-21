#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/a-number-after-a-double-reversal/description/

*/
class Solution {
public:
    int rev(int n) {
        int r = 0;
        while (n > 0) {
            int d = n % 10;
            r = r * 10 + d;
            n /= 10;
        }
        return r;
    }
    bool isSameAfterReversals(int num) {
        int reversed1 = rev(num);
        int reversed2 = rev(reversed1);
        if (reversed2 == num) return true;
        return false;
    }
};
int main() {


    return 0;
}