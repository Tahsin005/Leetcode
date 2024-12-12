#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/separate-black-and-white-balls/
        
*/          
class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();

        long long int cnt = 0, blackBalls = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cnt += blackBalls;
            } else {
                blackBalls++;
            }
        }

        return cnt;
    }
};
int main(){
    
    
    return 0;
}