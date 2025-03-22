#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/string-matching-in-an-array/description/?envType=daily-question&envId=2025-03-22

*/
class Solution {
    public:
    bool isSubstring(const string& mainStr, const string& subStr) {
            return mainStr.find(subStr) != string::npos;
        }
        vector<string> stringMatching(vector<string>& words) {
            int n = words.size();
            vector<string> ans;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i != j and isSubstring(words[j], words[i])) {
                        ans.push_back(words[i]);
                        break;
                    }
                }
            }

            return ans;
        }
};
int main() {


    return 0;
}