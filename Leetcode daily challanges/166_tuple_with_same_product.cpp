#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/tuple-with-same-product/description/?envType=daily-question&envId=2025-02-06

*/
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();

        vector<int> v;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                v.push_back(nums[i] * nums[j]);
            }
        }

        sort(v.begin(), v.end());

        int cnt = 0, tot = 0, seen = -1;

        n = v.size();

        for (int i = 0; i < n; i++) {
            if (v[i] == seen) {
                cnt++;
            } else {
                int tmp = (cnt - 1) * cnt / 2;
                tot += 8 * tmp;

                seen = v[i];
                cnt = 1;
            }
        }

        int tmp = (cnt - 1) / cnt / 2;
        tot += 8 * tmp;

        return tot;
    }
};
int main() {


    return 0;
}