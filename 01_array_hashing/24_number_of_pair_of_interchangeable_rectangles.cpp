#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles/
        
*/  
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();

        long long res = 0;
        map<double, long long> mp;
        for (int i = 0; i < n; i++) {
            vector<int> rec = rectangles[i];
            double ratio = (double)rec[0] / (double)rec[1];
            res += mp[ratio]++;
        }

        return res;

    }
};        
int main(){
    
    
    return 0;
}