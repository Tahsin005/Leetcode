#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximum-product-of-the-length-of-two-palindromic-subsequences/
        
*/      
class Solution {
public:
    long long global_ans = 0;
    bool isPalindrome(string &s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++, r--;
        }

        return true;
    }

    void subString(string &s, int idx, string &s1, string &s2) {
        if (isPalindrome(s1) and isPalindrome(s2)) {
            long long temp = (s1.length() * s2.length());
            global_ans = max(global_ans, temp);
        }   

        for (int i = idx; i < s.size(); i++) {
            s1.push_back(s[i]);
            subString(s, i + 1, s1, s2);
            s1.pop_back();

            s2.push_back(s[i]);
            subString(s, i + 1, s1, s2);
            s2.pop_back();
        }
        return;
    }
    int maxProduct(string s) {
        string s1 = "", s2 = "";

        subString(s, 0, s1, s2);

        return global_ans;
    }
};    
int main(){
    
    
    return 0;
}