#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/robot-return-to-origin/

*/
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;

        for (char move: moves) {
            if (move == 'U') y++;
            else if (move == 'D') y--;
            else if (move == 'L') x--;
            else if (move == 'R') x++;
        }

        return x == 0 and y == 0;
    }
};
int main(){


    return 0;
}