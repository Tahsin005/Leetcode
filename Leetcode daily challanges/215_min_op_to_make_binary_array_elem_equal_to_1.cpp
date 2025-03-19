#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/?envType=daily-question&envId=2025-03-19

*/
class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int count = 0;
            int n = nums.size();

            for (int i = 0; i < n - 2; i++) {
                if (nums[i] == 0) {
                    nums[i] ^= 1;
                    nums[i + 1] ^= 1;
                    nums[i + 2] ^= 1;
                    count++;
                }
            }

            return (nums[n - 2] == 1 and nums[n - 1] == 1) ? count : -1;
        }
};
int main() {


    return 0;
}