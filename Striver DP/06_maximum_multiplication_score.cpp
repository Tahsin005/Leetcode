#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximum-multiplication-score/
        
*/  
class Solution {
public:
    long long solve(vector<int> &a, vector<int> &b, int i1, int i2, vector<vector<long long int>> &v) {
        if (i1 == a.size()) return 0;
        if (i2 >= b.size()) return INT_MIN;

        if (v[i1][i2] != -1) return v[i1][i2];

        long long nibo = (long long)a[i1] * (long long)b[i2] + solve(a, b, i1 + 1, i2 + 1, v);
        long long nibo_na = solve(a, b, i1, i2 + 1, v);

        return v[i1][i2] = max(nibo, nibo_na);
    }
    long long maxScore(vector<int>& a, vector<int>& b) {
        vector<vector<long long int>> v(4, vector<long long int> (b.size(), - 1));
        return solve(a, b , 0, 0, v);
    }
};        
int main(){
    
    
    return 0;
}