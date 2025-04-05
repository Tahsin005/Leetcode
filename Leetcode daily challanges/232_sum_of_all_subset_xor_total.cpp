#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/?envType=daily-question&envId=2025-04-05

*/
class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            int or_all = 0;
            for (int num : nums) {
                or_all |= num;
            }

            int multiplier = 1 << (nums.size() - 1);

            return or_all * multiplier;
        }
};
int main() {


    return 0;
}