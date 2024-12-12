#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/find-champion-ii/?envType=daily-question&envId=2024-11-26

*/
class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> weakTeams(n, 0);

        for (auto val: edges) {
            weakTeams[val[1]]++;
        }

        int cnt = 0, champion = -1;

        for (int i = 0; i < n; i++) {
            if (weakTeams[i] == 0) {
                cnt++;
                champion = i;
            }
        }

        if (cnt > 1) return -1;
        return champion;
    }
};
int main(){


    return 0;
}