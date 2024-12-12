#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

*/
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evenCount = 0;
        int oddCount = 0;

        for (int pos : position) {
            if (pos % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        return min(oddCount, evenCount);
    }
};
int main(){


    return 0;
}