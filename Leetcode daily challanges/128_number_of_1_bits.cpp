#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/number-of-1-bits/description/

*/
class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;

        while (n > 0) {
            cnt += (n & 1);
            n >>= 1;
        }

        return cnt;
    }
};
int main(){


    return 0;
}