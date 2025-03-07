#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/closest-prime-numbers-in-range/description/?envType=daily-question&envId=2025-03-07

*/
class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            vector<bool> sieve(right + 1, true);
            sieve[0] = false;
            sieve[1] = false;

            for (int i = 2; i * i <= right; i++) {
                if (sieve[i]) {
                    for (int j = i * i; j <= right; j += i) {
                        sieve[j] = false;
                    }
                }
            }

            vector<int> primes;

            for (int i = left; i <= right; i++) {
                if (sieve[i]) {
                    primes.push_back(i);
                }
            }

            vector<int> ans = {-1, -1};

            if (primes.size() < 2) {
                return ans;
            }

            int gap = INT_MAX;

            for (int i = 1; i < primes.size(); i++) {
                int currGap = primes[i] - primes[i - 1];
                if (currGap < gap) {
                    gap = currGap;
                    ans = {primes[i - 1], primes[i]};
                }
            }

            return ans;
        }
};
int main() {


    return 0;
}