#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/crawler-log-folder/?envType=daily-question&envId=2024-07-10
        
*/  
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0, n = logs.size();

        for (int i = 0; i < n; i++) {
            if (logs[i] == "./") {
                continue;
            } else if (logs[i] == "../") {
                if (cnt) cnt--;
            } else {
                cnt++;
            }
        }

        return cnt;
    }
};        
int main(){
    
    
    return 0;
}