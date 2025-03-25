#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-good-numbers/description/

*/
class Solution {
    public:
        int binaryExpo(long long b, long long e, int mod = 1000000007) {
            int ans = 1;

            while (e > 0) {
                if (e % 2 == 1) {
                    ans = (1LL * ans * b) % mod;
                }

                b = (1LL * b * b) % mod;
                e /= 2;
            }
            return ans;
        };
        int countGoodNumbers(long long n) {
            if (n == 1) return 5;

            long long even = 5;
            long long odd = 4;
            long long temp = n / 2;
            int mod = 1000000007;
            int e = binaryExpo(even, temp + (n % 2), mod);
            int o = binaryExpo(odd, temp, mod);
            int ans = (1ll * o * e) % mod;

            return ans;
        }
};
int main() {


    return 0;
}