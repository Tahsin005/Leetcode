#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-height-of-a-triangle/description/

*/
class Solution {
public:
    int calculateHeight(int red, int blue) {
        int height = 0;
        int i = 1;

        while (true) {
            if (i & 1) {
                if (red >= i) {
                    red -= i;
                } else {
                    break;
                }
            } else {
                if (blue >= i) {
                    blue -= i;
                } else {
                    break;
                }
            }
            height++;
            i++;
        }

        return height;
    }
    int maxHeightOfTriangle(int red, int blue) {
        return max(calculateHeight(red, blue), calculateHeight(blue, red));
    }
};
int main(){


    return 0;
}