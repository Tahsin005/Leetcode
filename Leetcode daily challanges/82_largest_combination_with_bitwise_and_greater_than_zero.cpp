#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/
*/
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int cnt = 0;

        for (int i = 0; i < 32; i++) {
            int count = 0;
            for (int num: candidates) {
                int mask = 1 << i;
                if ((num & mask) != 0) {
                    count++;
                }
            }
            cnt = max(cnt, count);
        }

        return cnt;
    }
};
int main(){


    return 0;
}