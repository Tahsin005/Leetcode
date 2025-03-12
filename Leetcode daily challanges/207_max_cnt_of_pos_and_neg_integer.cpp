#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/?envType=daily-question&envId=2025-03-12

*/
class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int pos = 0, neg = 0;
            for (int val : nums) {
                if (val == 0) continue;
                pos += (val > 0);
                neg += (val < 0);
            }
            return max(pos, neg);
        }
};
int main() {


    return 0;
}