#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/description/?envType=daily-question&envId=2025-10-18

*/
class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long cur = LLONG_MIN;
        int count = 0;

        for (auto x : nums) {
            long long start = x - k;
            long long end = x + k;
            long long candidate = max(cur + 1, start);

            if (candidate <= end) {
                count++;
                cur = candidate;
            }
        }

        return count;
    }
};

int main() {


    return 0;
}