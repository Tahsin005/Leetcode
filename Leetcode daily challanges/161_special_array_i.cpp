#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/special-array-i/description/?envType=daily-question&envId=2025-02-01

*/
class Solution {
public:
    bool isNotSpecial(int a, int b) {
        return (a % 2 == 0 and b % 2 == 0) or (a % 2 == 1 and b % 2 == 1);
    }

    bool isArraySpecial(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (isNotSpecial(nums[i], nums[i + 1])) {
                return false;
            }
        }

        return true;
    }
};
int main() {


    return 0;
}