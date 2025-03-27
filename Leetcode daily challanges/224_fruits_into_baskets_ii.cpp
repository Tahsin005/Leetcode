#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/fruits-into-baskets-ii/description/

*/
class Solution {
    public:
        int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
            int cnt = 0, n = fruits.size();

            for (int i = 0; i < n; i++) {
                bool placed = false;
                for (int j = 0; j < n; j++) {
                    if (baskets[j] >= fruits[i]) {
                        baskets[j] = -1;
                        placed = true;
                        break;
                    }
                }

                if (!placed) cnt++;
            }

            return cnt;
        }
};
int main() {


    return 0;
}