#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/increasing-decreasing-string/description/

*/
class Solution {
public:
    string sortString(string s) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        string result = "";
        while (result.length() < s.length()) {
            // increasing
            for (int i = 0; i < 26; ++i) {
                if (freq[i] > 0) {
                    result += (i + 'a');
                    freq[i]--;
                }
            }
            // decreasing
            for (int i = 25; i >= 0; --i) {
                if (freq[i] > 0) {
                    result += (i + 'a');
                    freq[i]--;
                }
            }
        }
        return result;
    }
};
int main() {


    return 0;
}