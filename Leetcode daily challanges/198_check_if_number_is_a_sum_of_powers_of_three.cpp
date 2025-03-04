#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/?envType=daily-question&envId=2025-03-04

*/
class Solution {
    public:
        bool checkPowersOfThree(int n) {
            while (n > 0) {
                if (n % 3 == 2) return false;
                n /= 3;
            }

            return true;
        }
};
int main() {


    return 0;
}