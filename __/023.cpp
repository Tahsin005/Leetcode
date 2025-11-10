#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/description/?envType=daily-question&envId=2025-11-10

*/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> stk;
        int cnt = 0;

        for (int num: nums) {
            while (!stk.empty() and stk.back() > num) {
                stk.pop_back();
            }

            if (num == 0) continue;
            if (stk.empty() || stk.back() < num) {
                cnt++;
                stk.push_back(num);
            }
        }

        return cnt;
    }
};
int main() {


    return 0;
}