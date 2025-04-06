#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/reverse-prefix-of-word/description/?envType=problem-list-v2&envId=two-pointers

*/
class Solution {
    public:
        string reversePrefix(string word, char ch) {
            stack<char> stk;
            int index = -1;
            for (int i = 0; i < word.length(); i++) {
                stk.push(word[i]);
                if (word[i] == ch) {
                    index = i;
                    break;
                }
            }

            if (index == -1) return word;
            for (int i = 0; i <= index; i++) {
                word[i] = stk.top();
                stk.pop();
            }
            return word;
        }
};
int main() {


    return 0;
}