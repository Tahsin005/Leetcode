#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/number-complement/?envType=daily-question&envId=2024-12-05

*/
class Solution {
public:
    int findComplement(int n) {
        unsigned int highestBit = 1 << (int)(log2(n));
        unsigned int mask = (highestBit * 2) - 1;
        return n ^ mask;
    }
};
int main(){


    return 0;
}