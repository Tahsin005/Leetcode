#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/brick-wall/
        
*/  
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int, int> mp;
        int r = wall.size();
        for (int i = 0; i < r; i++) {
            int sum = 0;
            for (int j = 0; j < wall[i].size() - 1; j++) {
                sum += wall[i][j];
                mp[sum]++;
            }
        }

        int max_bricks = 0;
        for (auto [x, y]: mp) {
            max_bricks = max(max_bricks, y);
        }

        return r - max_bricks;
    }
};        
int main(){
    
    
    return 0;
}