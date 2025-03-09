#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/alternating-groups-ii/description/?envType=daily-question&envId=2025-03-09

*/
class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            colors.insert(colors.end(), colors.begin(), colors.begin() + (k - 1));
            int count = 0;
            int left = 0;

            for (int right = 0; right < colors.size(); right++) {
                if (right > 0 and colors[right] == colors[right - 1]) {
                    left = right;
                }

                if (right - left + 1 >= k) {
                    count++;
                }
            }

            return count;
        }
};
int main() {


    return 0;
}