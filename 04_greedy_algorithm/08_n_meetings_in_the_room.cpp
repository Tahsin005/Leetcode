#include <bits/stdc++.h>
using namespace std;


// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
class Solution {
  public:
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int, int>> comb;
        for (int i = 0; i < n; i++) {
            comb.push_back(make_pair(start[i], end[i]));
        }
        
        sort(comb.begin(), comb.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });
        
        int cnt = 1, freeTime = comb[0].second;
        
        for (int i = 1; i < n; i++) {
            int start_time = comb[i].first;
            if (start_time > freeTime) {
                cnt++;
                freeTime = comb[i].second;
            }
        }
        
        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}