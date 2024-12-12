#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/find-the-difference/
        
*/  
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums = 0, sumt = 0;

        for (char ch: s) sums += (int(ch));
        for (char ch: t) sumt += (int(ch));

        return char(sumt - sums);
    }
};        
int main(){
    
    
    return 0;
}