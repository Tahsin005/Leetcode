#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/?envType=daily-question&envId=2024-12-16

*/
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k--) {
            int minIdx = 0;
            int mn = nums[0];
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < mn) {
                    mn = nums[i];
                    minIdx = i;
                }
            }

            nums[minIdx] *= multiplier;
        }

        return nums;
    }
};
int main(){


    return 0;
}