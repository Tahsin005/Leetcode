#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/repeated-substring-pattern/
        
*/        
class Solution {
public:
    bool isSubstring(const string& str, const string& subStr) {
        return str.find(subStr) != string::npos;
    }
    bool repeatedSubstringPattern(string s) {
        string temp = s + s;

        temp.erase(0, 1);
        temp.erase(temp.length() - 1, 1);

        cout << temp << endl;
        return isSubstring(temp, s);
    }
};  
int main(){
    
    
    return 0;
}