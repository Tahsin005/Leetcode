#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/
        
*/  
class Solution {
public:
    const int M = 1e9 + 7;
    int binExpIter (int a, int b) {
        int ans = 1;
        while (b) {
            if (b & 1) {
                ans = (ans * 1LL * a) % M;
            }
            a = (a * 1LL * a) % M;
            b >>= 1;
        }
        return ans;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        int i = 0, j = nums.size() - 1;

        while (i <= j) {
            if (nums[i] + nums[j] <= target) {
                ans = (ans + binExpIter(2, j - i)) % M;
                i++;
            } else {
                j--;
            }
        }

        return ans;
    }
};        
int main(){
    
    
    return 0;
}