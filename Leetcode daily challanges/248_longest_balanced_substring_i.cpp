#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/longest-balanced-substring-i/description/

*/
class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
                int mini = INT_MAX, maxi = 0;

                for (int &f: freq) {
                    if (f > 0) {
                        mini = min(mini, f);
                        maxi = max(maxi, f);
                    }
                }

                if (mini == maxi) {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }

        return maxLength;
    }
};
int main() {


    return 0;
}