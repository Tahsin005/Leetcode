#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/alternating-groups-i/description/
        
*/  
class Solution {
public:
    bool isAlternating (int a, int x, int b) {
        return (a == b and x != a);
    }
    int numberOfAlternatingGroups(vector<int>& colors) {
        int cnt = 0;

        int n = colors.size();
        cnt += isAlternating (colors[n - 1], colors[0], colors[1]);
        cnt += isAlternating (colors[n - 2], colors[n - 1], colors[0]);

        for (int i = 1; i < n - 1; i++) {
            cnt += isAlternating(colors[i - 1], colors[i], colors[i + 1]);
        }

        return cnt;
    }
};        
int main(){
    
    
    return 0;
}