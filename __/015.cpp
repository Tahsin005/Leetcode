#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/description/?envType=problem-list-v2&envId=array

*/
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> m;
        int xorr = 0;
        for (int i : nums) {
            if (m[i]) xorr ^= i;
            m[i]++;
        }
        return xorr;
    }
};
int main() {


    return 0;
}