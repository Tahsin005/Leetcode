#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/height-checker/
        
*/          
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> duplicate = heights;

        sort(duplicate.begin(), duplicate.end());

        int cnt = 0;

        for (int i = 0; i < heights.size(); i++) {
            if (duplicate[i] != heights[i]) {
                cnt++;
            }
        }

        return cnt;
    }
};
int main(){
    
    
    return 0;
}