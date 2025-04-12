#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/description/?envType=problem-list-v2&envId=string

*/
class Solution {
    public:
        int numOfStrings(vector<string>& patterns, string word) {
            int count = 0;
            for (const string& pattern : patterns) {
                if (word.find(pattern) != string::npos) {
                    count++;
                }
            }
            return count;
        }
};
int main() {


    return 0;
}