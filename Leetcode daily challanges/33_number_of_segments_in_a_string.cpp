#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/number-of-segments-in-a-string/
        
*/          
class Solution {
public:
    int countSegments(string s) {
        if (s == "") return 0;

        int cnt = 0;
        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') temp += s[i];
            else {
                if (temp != "") cnt++;
                temp = "";
            }
        }

        if (temp != "") cnt++;

        return cnt;
    }
};
int main(){
    
    
    return 0;
}