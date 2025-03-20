#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-03-20

*/
class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            unordered_map<int, int> counter;
            for (int num : nums) {
                counter[num]++;
            }

            for (const auto& [_, count] : counter) {
                if (count % 2 != 0) {
                    return false;
                }
            }

            return true;
        }
};
int main() {


    return 0;
}