#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/

*/
class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int, int>> sorted;

        for (int i = 0; i < nums.size(); i++) {
            sorted.push_back({nums[i], i});
        }

        sort(sorted.begin(), sorted.end());

        vector<bool> visited(nums.size(), false);

        long long score = 0;

        for (int i = 0; i < nums.size(); i++) {
            int number = sorted[i].first;
            int idx = sorted[i].second;

            if (!visited[idx]) {
                visited[idx] = true;
                score += number;

                if (idx - 1 >= 0) {
                    visited[idx - 1] = true;
                }
                if (idx + 1 < nums.size()) {
                    visited[idx + 1] = true;
                }
            }
        }

        return score;
    }
};
int main(){


    return 0;
}