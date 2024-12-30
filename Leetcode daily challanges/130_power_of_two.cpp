#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/power-of-two/

*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        n--;

        bool isPowerOfTwo = true;

        while (n > 0) {
            if ((n & 1) == 0) {
                isPowerOfTwo = false;
                break;
            }
            n >>= 1;
        }

        return isPowerOfTwo;
    }
};
int main(){


    return 0;
}