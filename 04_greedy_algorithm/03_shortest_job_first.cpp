#include <bits/stdc++.h>
using namespace std;
/*
    https://www.geeksforgeeks.org/problems/shortest-job-first/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-job-first
*/
class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        long long t = 0, wt_time = 0;
        
        sort(bt.begin(), bt.end());
        
        for (int i = 0; i < bt.size(); i++) {
            wt_time += t;
            t += bt[i];
        }
        
        return wt_time / bt.size();
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bt(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> bt[i];
        }
        Solution obj;
        long long ans = obj.solve(bt);
        cout << ans << "\n";
    }
    return 0;
}