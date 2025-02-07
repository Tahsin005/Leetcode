#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/find-the-highest-altitude/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highestAlt = 0, currentAlt = 0;

        for (int val : gain) {
            currentAlt += val;
            highestAlt = max(highestAlt, currentAlt);
        }

        return highestAlt;
    }
};
int main() {


    return 0;
}