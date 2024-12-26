#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/target-sum/description/?envType=daily-question&envId=2024-12-26

*/
class Solution {
public:
    int totalWays = 0;

    void calculateWays(vector<int>& nums, int currentIndex, int currentSum, int target) {
        if (currentIndex == nums.size()) {
            if (currentSum == target) {
                totalWays++;
            }
        } else {
            calculateWays(nums, currentIndex + 1, currentSum + nums[currentIndex], target);
            calculateWays(nums, currentIndex + 1, currentSum - nums[currentIndex], target);
        }
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        calculateWays(nums, 0, 0, target);
        return totalWays;
    }
};

int main(){


    return 0;
}