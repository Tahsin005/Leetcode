#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/?envType=daily-question&envId=2025-02-12

*/
class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            vector<int> mp(90, -1);
            int ans = -1;

            for (int num : nums) {
                int tmp = num, digitSum = 0;

                while (tmp) {
                    digitSum += tmp % 10;
                    tmp /= 10;
                }

                if (mp[digitSum] != -1) {
                    ans = max(ans, num + mp[digitSum]);
                }

                mp[digitSum] = max(num, mp[digitSum]);
            }

            return ans;
        }
};
int main() {


    return 0;
}