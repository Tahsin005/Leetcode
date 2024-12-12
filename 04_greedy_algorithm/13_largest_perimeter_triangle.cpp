#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/largest-perimeter-triangle/
        
*/          
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int mx = 0;
        sort(nums.begin(), nums.end());
        
        for (int i = nums.size() - 3; i >= 0; --i) {
            int a = nums[i];
            int b = nums[i + 1];
            int c = nums[i + 2];
            if (a + b > c and a + c > b and b + c > a) {
                mx = max(mx, a + b + c);
            }
        }
        return mx;
    }
};
int main(){
    
    
    return 0;
}