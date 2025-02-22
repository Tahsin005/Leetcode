
#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/determine-if-two-strings-are-close/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freq1(26, 0), freq2(26, 0);

        for (char ch : word1) freq1[ch - 'a']++;
        for (char ch : word2) freq2[ch - 'a']++;

        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0 and freq2[i]) != 0 or (freq1[i] != 0 and freq2[i] == 0)) {
                return false;
            }
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }
};
int main() {
    return 0;
}
