#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/first-bad-version/description/?envType=daily-question&envId=2025-02-24

*/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n){
        long long l = 1, r = n, m, res = n;

        while (l <= r) {
            m = l + (r - l) / 2;
            if (isBadVersion(m) == 1) {
                r = m - 1;
                res = min(res, m);
            } else {
                l = m + 1;
            }
        }
        
        return res;
    }
};
int main() {


    return 0;
}
