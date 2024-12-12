#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/valid-parenthesis-string/
        
*/  
class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open, star;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                if (open.empty()) {
                    if (star.empty()) return false;
                    else star.pop();
                } else {
                    open.pop();
                }
            } else if (s[i] == '(') open.push(i);
            else if (s[i] == '*') star.push(i);
        }

        while (!open.empty()) {
            if (star.empty() or star.top() < open.top()) {
                return false;
            } else {
                star.pop(), open.pop();
            }
        }

        return true;
    }
};        
int main(){
    
    
    return 0;
}