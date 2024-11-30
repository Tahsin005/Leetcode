#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/count-the-number-of-consistent-strings/description/?envType=daily-question&envId=2024-11-30

*/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> mp;

        for (char ch : allowed) {
            mp[ch]++;
        }

        int cnt = 0;

        for (string s : words) {
            bool flag = true;
            for (char ch : s) {
                if (mp.find(ch) == mp.end()) {
                    flag = false;
                    break;
                }
            }
            if (flag) cnt++;
        }

        return cnt;
    }
};
int main(){


    return 0;
}