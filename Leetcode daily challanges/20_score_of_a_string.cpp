#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/score-of-a-string/
        
*/          
class Solution {
public:
    int scoreOfString(string s) {
        vector<int> v;

        for (char ch: s) {
            v.push_back(ch - 'a');
        }

        int score = 0;
        for (int i = 0; i < v.size() - 1; i++) {
            score += abs(v[i] - v[i + 1]);
        }

        return score;
    }
};
int main(){
    
    
    return 0;
}