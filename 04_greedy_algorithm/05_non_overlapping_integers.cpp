#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/non-overlapping-intervals/
        
*/          
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int cnt = 1, lastTime = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= lastTime) {
                lastTime = intervals[i][1];
                cnt++;
            }
        }

        return intervals.size() - cnt;
    }
};
int main(){
    
    
    return 0;
}