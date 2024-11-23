#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*



https://leetcode.com/problems/rotating-the-box/description/?envType=daily-question&envId=2024-11-23

*/
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();

        vector<vector<char>> rotatedBox(n, vector<char>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                rotatedBox[i][j] = box[m - 1 - j][i];
            }
        }

        for (int j = 0; j < m; j++) {
            int b = n - 1, t = n - 1;
            while (b >= t and t >= 0) {
                if (rotatedBox[b][j] == '#') {
                    b--;
                }  else if (rotatedBox[b][j] == '.' and rotatedBox[t][j] == '#') {
                    rotatedBox[b][j] = rotatedBox[t][j];
                    rotatedBox[t][j] = '.';
                    b--;
                } else if (rotatedBox[t][j] == '*') {
                    b = t - 1;
                }
                t--;
            }
        }

        return rotatedBox;
    }
};
int main(){


    return 0;
}