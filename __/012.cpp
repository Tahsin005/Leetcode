#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/smallest-missing-multiple-of-k/description/

*/
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> hashSet(nums.begin(), nums.end());
        for (int i = 1; i <= (n + 1); i++) {
            if (hashSet.find(k * i) == hashSet.end()) {
                return k * i;
            }
        }
        return k * 2;
    }
};
int main() {


    return 0;
}