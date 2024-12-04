#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/?envType=daily-question&envId=2024-12-04

*/
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        map<char, int> mp;

        int idx = 0;

        for (int i = 0; i < str1.length() and idx < str2.length(); i++) {
            if (str1[i] == str2[idx] or (str1[i] + 1 == str2[idx]) or (str1[i] - 25 == str2[idx])) {
                idx++;
            }
        }

        return idx == str2.length();
    }
};
int main(){


    return 0;
}