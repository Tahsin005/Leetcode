#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/button-with-longest-push-time/description/

*/
class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int index = events[0][0];
        int maxTime = events[0][1];

        for (int i = 1; i < events.size(); i++) {
            int diff = events[i][1] - events[i - 1][1];

            if(diff == maxTime) index = min(events[i][0], index);
            else if(diff > maxTime) {
                index = events[i][0];
                maxTime = events[i][1] - events[i - 1][1];
            }
        }
        return index;
    }
};
int main(){


    return 0;
}