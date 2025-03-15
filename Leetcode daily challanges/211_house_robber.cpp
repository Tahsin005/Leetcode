#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/house-robber/description/

*/
class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if (n == 1) return nums[0];
            if (n == 2) return (nums[1] > nums[0]) ? nums[1] : nums[0];

            int m_money = 0;
            vector<int> max_money(n);

            max_money[0] = nums[0];
            max_money[1] = (nums[1] > nums[0]) ? nums[1] : nums[0];
            for (int i = 2; i < nums.size(); i++) {
                max_money[i] = max(max_money[i - 1], nums[i] + max_money[i - 2]);
            }

            return max_money[n - 1];
        }
};
// </>
int main() {


    return 0;
}