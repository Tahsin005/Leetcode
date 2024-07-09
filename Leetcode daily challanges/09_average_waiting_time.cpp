#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/average-waiting-time/description/
        
*/          
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& v) {
        long long time_till_now = v[0][0] + v[0][1];
        long long ans = time_till_now - v[0][0];
        long long n = v.size();
        for (int i = 1; i < n; i++) {
            time_till_now = max(v[i][0] * 1LL, time_till_now) + (v[i][1] * 1LL);
            ans += (time_till_now - (v[i][0] * 1LL));
        }
        return (double)ans / (double)n;
    }
};
int main(){
    
    
    return 0;
}