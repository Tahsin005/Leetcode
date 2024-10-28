#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/find-the-maximum-factor-score-of-array/

*/
class Solution {
public:
    int calculateGCD(const vector<int>& nums) {
        int gcd_val = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            gcd_val = gcd(gcd_val, nums[i]);
        }
        return gcd_val;
    }

    long long calculateLCM(const vector<int>& nums) {
        long long lcm_val = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            lcm_val = (lcm_val * nums[i]) / gcd(static_cast<long long>(lcm_val), static_cast<long long>(nums[i]));
        }
        return lcm_val;
    }

    long long maxScore(vector<int>& nums) {
        int totalGCD = calculateGCD(nums);
        long long totalLCM = calculateLCM(nums);

        long long maxFactorScore = 1LL * totalGCD * totalLCM;

        for (int i = 0; i < nums.size(); ++i) {
            vector<int> temp;
            for (int j = 0; j < nums.size(); ++j) {
                if (i != j) temp.push_back(nums[j]);
            }

            if (!temp.empty()) {
                int gcd = calculateGCD(temp);
                long long lcm = calculateLCM(temp);
                maxFactorScore = max(maxFactorScore, 1LL * gcd * lcm);
            }
        }

        return maxFactorScore;
    }
};

int main(){


    return 0;
}