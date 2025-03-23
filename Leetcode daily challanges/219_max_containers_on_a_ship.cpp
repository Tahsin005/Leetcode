#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-containers-on-a-ship/description/

*/
class Solution {
    public:
        int maxContainers(int n, int w, int maxWeight) {
            long long totalDeck = n * n * 1LL;
            if (totalDeck * w * 1LL <= maxWeight * 1LL) return totalDeck;
            return maxWeight / w;
        }
};
int main() {


    return 0;
}