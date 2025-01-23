#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-servers-that-communicate/description/?envType=daily-question&envId=2025-01-23

*/
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        int cnt = 0, row[250] = {0}, col[250] = {0};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cnt += (grid[i][j]);
                row[i] += (grid[i][j]);
                col[j] += (grid[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cnt -= (grid[i][j] and row[i] == 1 and col[j] == 1);
            }
        }

        return cnt;
    }
};
int main() {


    return 0;
}