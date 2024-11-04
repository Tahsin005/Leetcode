#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/string-compression-iii/?envType=daily-question&envId=2024-11-04

*/
class Solution {
public:
    string compressedString(string word) {
        string comp = "";

        int cnt = 1, n = word.length();

        char ch = word[0];

        for (int i = 1; i < n; i++) {
            if (ch == word[i] and cnt < 9) {
                cnt++;
            } else {
                comp += cnt + '0';
                comp += ch;
                ch = word[i];
                cnt = 1;
            }
        }

        comp += cnt + '0';
        comp += ch;

        return comp;
    }
};
int main(){


    return 0;
}