#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/?envType=daily-question&envId=2025-04-09

*/
class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            map<int, int> mp;
            for (int val : nums) {
                if (val < k) return -1;
                else if (val > k) mp[val]++;
            }
            return mp.size();
        }
};
int main() {


    return 0;
}