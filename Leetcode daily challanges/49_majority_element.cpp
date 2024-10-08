#include<bits/stdc++.h>
using namespace std;

/*

https://leetcode.com/problems/majority-element/

*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int len = n / 2;

        sort(nums.begin(), nums.end());
        return nums[len];
    }
};
int main (){
    return 0;
}