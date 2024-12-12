#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/?envType=daily-question&envId=2024-11-25

*/
class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (ans.length() >= 2 and ans[ans.length() - 2] == s[i] and ans[ans.length() - 1] == s[i]) {
                continue;
            }
            ans.push_back(s[i]);
        }

        return ans;
    }
};
int main(){


    return 0;
}