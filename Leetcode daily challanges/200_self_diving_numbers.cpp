#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-total-number-of-colored-cells/description/?envType=daily-question&envId=2025-03-05


*/
class Solution {
public:
    bool self_dividing(int x) {
        int tmp = x;
        while (x) {
            int digit = x % 10;
            if (digit == 0) return false;
            if (tmp % digit != 0) return false;
            x /= 10;
        }

        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            if (self_dividing(i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
int main() {


    return 0;
}
