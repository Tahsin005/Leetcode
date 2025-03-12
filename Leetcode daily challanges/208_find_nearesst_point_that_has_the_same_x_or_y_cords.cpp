#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/description/

*/
class Solution {
    public:
        int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
            int mini_dis = INT_MAX, ans = -1;
    
            for(int i = 0; i < points.size(); i++) {
                int a = points[i][0], b = points[i][1];
    
                if(a == x or b == y) {
                    int current = abs(a - x) + abs(b - y);
                    
                    if(current < mini_dis) {
                        mini_dis = current;
                        ans = i; 
                    }
                }
            }
            return ans;
        }
};
    
int main() {


    return 0;
}