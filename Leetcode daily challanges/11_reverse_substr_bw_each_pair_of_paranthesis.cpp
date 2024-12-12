#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/
        
*/  
class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(ans.length());
            } else if (s[i] == ')') {
                int start = st.top();
                st.pop();
                reverse(ans.begin() + start, ans.end());
            } else {
                ans += s[i];
            }
        }

        return ans;
    }
};        
int main(){
    
    
    return 0;
}