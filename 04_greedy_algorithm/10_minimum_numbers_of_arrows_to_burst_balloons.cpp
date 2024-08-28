#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
        
*/          
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();

        if (n == 0) return 0;

        sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[1] < b[1];
        });

        int pos = points[0][1];

        int arrow = 1;
        for (int i = 1; i < n; i++) {
            if (points[i][0] <= pos) continue;
            else {
                pos = points[i][1];
                arrow++;
            }
        }

        return arrow;
    }
};
int main(){
    
    
    return 0;
}