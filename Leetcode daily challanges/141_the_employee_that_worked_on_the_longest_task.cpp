#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/description/?envType=daily-question&envId=2025-01-15

*/
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int id = logs.front().front();
        int time = logs.front().back();
        int m = logs.size();
        for (int i = 1; i < m; i++){
            if (int t = logs[i].back() - logs[i - 1].back(); t > time || t == time && id > logs[i].front()){
                time = t;
                id = logs[i].front();
            }
        }
        
        return id;
    }
};


int main() {


    return 0;
}