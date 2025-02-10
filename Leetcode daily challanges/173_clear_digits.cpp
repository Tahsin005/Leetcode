#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/clear-digits/description/?envType=daily-question&envId=2025-02-10

*/
class Solution {
    public:
        string clearDigits(string s) {
            string ans = "";

            for (char ch : s) {
                if (isdigit(ch) and !ans.empty()) {
                    ans.pop_back();
                } else {
                    ans += ch;
                }
            }

            return ans;
        }
};
int main() {


    return 0;
}