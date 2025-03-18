#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/longest-nice-subarray/description/?envType=daily-question&envId=2025-03-18

*/
class Solution {
    public:
        bool niceSubarray(int length, vector<int> & nums) {
            if (length <= 1) return true;

            for (int i = 0; i <= nums.size() - length; i++) {
                int mask = 0;
                bool ok = true;
                for (int j = i; j < i + length; j++) {
                    if ((mask & nums[j]) != 0) {
                        ok = false;
                        break;
                    }
                    mask |= nums[j];
                }

                if (ok) return ok;
            }

            return false;
        }
        int longestNiceSubarray(vector<int>& nums) {
            int l = 0, r = nums.size();
            int result = 1;

            while (l <= r) {
                int currLen = l + (r - l) / 2;
                if (niceSubarray(currLen, nums)) {
                    result = currLen;
                    l = result + 1;
                } else {
                    r = currLen - 1;
                }
            }

            return result;
        }
};
int main() {


    return 0;
}