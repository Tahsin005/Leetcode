#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/counting-words-with-a-given-prefix/description/?envType=daily-question&envId=2025-01-09

*/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;

        for (int i = 0; i < words.size(); i++) {
            if (words[i].length() < pref.length()) {
                continue;
            } else {
                string str = words[i].substr(0, pref.length());
                cnt += (str == pref);
            }
        }

        return cnt;
    }
};
int main() {


    return 0;
}