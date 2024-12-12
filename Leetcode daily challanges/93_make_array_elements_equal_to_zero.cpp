#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/contest/weekly-contest-424/problems/make-array-elements-equal-to-zero/

*/
class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int validSelections = 0;

        auto simulate = [&](int start, int direction) -> bool {
            vector<int> temp = nums;
            int curr = start;

            while (curr >= 0 && curr < n) {
                if (temp[curr] == 0) {
                    curr += direction;
                } else {
                    temp[curr]--;
                    direction = -direction;
                    curr += direction;
                }
            }

            return all_of(temp.begin(), temp.end(), [](int x) { return x == 0; });
        };

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                if (simulate(i, -1)) validSelections++;
                if (simulate(i, 1)) validSelections++;
            }
        }

        return validSelections;
    }
};
int main(){


    return 0;
}