#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/container-with-most-water/
        
*/         
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int ans = 0;

        while (i < j) {
            int h = min(height[i], height[j]);

            int w = j - i;
            cout << w << " ";
            ans = max(ans, h * w);
            if (height[i] < height[j]) {
                i++;
            } else if (height[i] > height[j]) {
                j--;
            } else {
                i++, j--;
            }
        }

        return ans;
    }
}; 
int main(){
    
    
    return 0;
}