#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/increasing-triplet-subsequence/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;

        for (int val : nums) {
            if (val <= first) first = val;
            else if (val <= second) second = val;
            else return true;
        }

        return false;
    }
};
int main() {


    return 0;
}