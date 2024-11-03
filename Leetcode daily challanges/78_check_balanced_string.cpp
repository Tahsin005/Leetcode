#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/check-balanced-string/

*/
class Solution {
public:
    bool isBalanced(string num) {
        int sumOdd = 0, sumEven = 0;

        for (int i = 0; i < num.length(); i++) {
            int x = num[i] - '0';
            if (i & 1) sumOdd += x;
            else sumEven += x;
        }

        return sumOdd == sumEven;
    }
};
int main(){


    return 0;
}