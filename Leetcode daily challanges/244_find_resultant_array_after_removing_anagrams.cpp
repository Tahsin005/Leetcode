#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

http://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/?envType=daily-question&envId=2025-10-11

*/
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<unordered_map<char, int>> freq(words.size());

        for (int i = 0; i < words.size(); i++) {
            for (char ch : words[i]) {
                freq[i][ch]++;
            }
        }

        vector<string> ans;
        ans.push_back(words[0]);
        for (int i = 1; i < words.size(); i++) {
            if (freq[i] != freq[i - 1]) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};
int main() {


    return 0;
}