#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/counting-bits/
        
*/          
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);

        for (int i = 0; i <= n; i++) {
            int cnt = 0;
            int num = i;

            while (num > 0) {
                if (num & 1) cnt++;
                num >>= 1;
            }
            ans[i] = cnt;
        }

        return ans;
    }
};

int main(){
    
    
    return 0;
}