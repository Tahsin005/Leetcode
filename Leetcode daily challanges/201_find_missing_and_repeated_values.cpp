#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-missing-and-repeated-values/description/?envType=daily-question&envId=2025-03-06

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> mp;

        for (vector<int> vec : grid) {
            for (int val : vec) {
                mp[val]++;
            }
        }

        for (auto [x, y] : mp) cout << x << " " << y << endl;

        vector<int> ans;

        for (int i = 1; i <= grid.size() * grid.size(); i++) {
            if (mp.find(i) == mp.end() or mp[i] == 2) {
                ans.push_back(i);
            }
        }

        if (mp.find(ans[0]) == mp.end()) {
            swap(ans[0], ans[1]);
        }

        return ans;
    }
};

int main () {
  return 0;
}
