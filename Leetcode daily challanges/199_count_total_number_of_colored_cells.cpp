#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-total-number-of-colored-cells/description/?envType=daily-question&envId=2025-03-05

*/
class Solution {
    public:
        long long coloredCells(int n) {
            if (n == 1) return 1;
            if (n == 2) return 5;
    
            // long long ans = 5;
            // for (long long i = 3; i <= n; i++) {
            //     ans += (4LL * (i - 1));
            // }
    
            long long ans = 1 + (long long)n * (n - 1) * 2;
    
            return ans;
        }
};
int main() {


    return 0;
}