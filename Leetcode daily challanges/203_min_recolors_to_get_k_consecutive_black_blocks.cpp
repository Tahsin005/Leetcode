#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08

*/
class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.length();
            int ops = INT_MAX;
            
            for (int i = 0; i <= n - k; i++) {
                int white = 0;
                
                for (int j = i; j < i + k; j++) {
                    white += (blocks[j] == 'W');
                }
                
                ops = min(ops, white);
            }
            return ops;   
        }
};
int main() {


    return 0;
}