#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/shortest-distance-after-road-addition-queries-i/description/?envType=daily-question&envId=2024-11-27

*/
class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> dist(n), ans;
        vector<int> adj[n];

        iota(dist.begin(), dist.end(), 0);

        for (int i = 0; i < n - 1; i++) {
            adj[i].push_back(i + 1);
        }

        for (auto query : queries) {
            int source = query[0], destination = query[1];
            adj[source].push_back(destination);

            if (dist[source] + 1 < dist[destination]) {
                queue<int> q;
                q.push(destination);
                dist[destination] = dist[source] + 1;

                while (!q.empty()) {
                    int parent = q.front();
                    q.pop();

                    for (auto child : adj[parent]) {
                        if (dist[parent] + 1 < dist[child]) {
                            dist[child] = dist[parent] + 1;
                            q.push(child);
                        }
                    }
                }
            }

            ans.push_back(dist.back());
        }

        return ans;
    }
};
int main(){


    return 0;
}