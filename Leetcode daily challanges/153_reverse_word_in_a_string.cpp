#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0, right = 0;
        int i = 0;
        while (i < n) {
            while (i < n and s[i] == ' ') {
                i++;
            }
            if (i == n) {
                break;
            }
            while (i < n && s[i] != ' ') {
                s[right] = s[i];
                right++;
                i++;
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        
        s.resize(right - 1);
        return s;
    }
};
int main() {


    return 0;
}