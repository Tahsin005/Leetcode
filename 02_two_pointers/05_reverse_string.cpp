#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/reverse-string/description/
        
*/  
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
};        
int main(){
    
    
    return 0;
}