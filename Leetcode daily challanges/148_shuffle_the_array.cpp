#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/shuffle-the-array/description/

*/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for (int i = 0, j = n; i < n and j < 2 * n; i++, j++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }

        return ans;
    }
};
int main() {


    return 0;
}