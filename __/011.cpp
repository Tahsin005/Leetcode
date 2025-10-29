#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/smallest-number-with-all-set-bits/description/?envType=daily-question&envId=2025-10-29

*/
class Solution {
public:
    int smallestNumber(int n) {
        while (n & (n + 1)) {
            n |= n + 1;
        }
        return n;
    }
};
int main() {


    return 0;
}