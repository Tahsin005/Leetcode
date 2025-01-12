#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/combination-sum/description/

*/
class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& ans, int start) {
        if (target == 0) {
            ans.push_back(combination);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) continue;

            combination.push_back(candidates[i]);

            backtrack(candidates, target - candidates[i], combination, ans, i);

            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;

        backtrack(candidates, target, combination, ans, 0);

        return ans;
    }
};

int main() {


    return 0;
}