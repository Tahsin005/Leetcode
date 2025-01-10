#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/word-subsets/description/?envType=daily-question&envId=2025-01-10

*/
class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int maxFreq[26] = {0};

        int tempFreq[26];

        for (auto &word : words2) {
            memset(tempFreq, 0, sizeof tempFreq);

            for (char ch : word) {
                tempFreq[ch - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                maxFreq[i] = max(maxFreq[i], tempFreq[i]);
            }
        }

        vector<string> wordSubsets;

        for (auto &word : words1) {
            memset(tempFreq, 0, sizeof tempFreq);

            for (char ch : word) {
                tempFreq[ch - 'a']++;
            }

            bool isUniversal = true;

            for (int i = 0; i < 26; i++) {
                if (maxFreq[i] > tempFreq[i]) {
                    isUniversal = false;
                    break;
                }
            }

            if (isUniversal) {
                wordSubsets.push_back(word);
            }
        }

        return wordSubsets;
    }
};
int main() {


    return 0;
}