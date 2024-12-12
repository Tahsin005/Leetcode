#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/long-pressed-name/
        
*/          

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.length(), m = typed.length();

        int i = 0, j = 0;

        while (j < m) {
            if (i < n and name[i] == typed[j]) {
                i++;
            }  else if (j > 0 and typed[j] == typed[j - 1]) {
                
            }  else {
                return false;
            }
            j++;
        }
        
        return i == n;
    }
};int main(){
    
    
    return 0;
}