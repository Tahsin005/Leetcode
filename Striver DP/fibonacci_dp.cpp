#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
dp fibonacci

tc - O(n)
sc - O(n) + O(n)
        
*/          
int f(int n, vector<int> &dp) {
    if (n <= 1) return n;

    if (dp[n] != -1) return dp[n];

    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main(){
    int n; cin >> n;

    // vector<int> dp(n + 1, -1);

    // cout << f(n, dp);
    

    /* Tabulation */
    int prev2 = 0;
    int prev = 1;

    for (int i = 2; i <= n; i++) {
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }

    cout << prev;
    return 0;
}