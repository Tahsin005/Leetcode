#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-vowel-strings-in-ranges/description/?envType=daily-question&envId=2025-01-02

*/
class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);

        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> cnts(n);

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += (isVowel(words[i][0]) and isVowel(words[i][words[i].length() - 1]));
            cnts[i] = cnt;
        }

        vector<int> ans;

        for (auto query : queries) {
            int s = query[0], e = query[1];

            int c = 0;
            c += cnts[e];
            if (s != 0) {
                c -= cnts[s - 1];
            }

            cout << c << " ";
            ans.push_back(c);
        }

        return ans;
    }
};
int main(){


    return 0;
}