#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/find-the-winner-of-the-circular-game/?envType=daily-question&envId=2024-07-08
        
*/      
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for (int i = 1; i<=n; i++) {
            q.push(i);
        }
        while (q.size() > 1) {
            int x = k;
            while (x) {
                if (x == 1) {
                    q.pop();
                    break;
                } else {
                    int peek = q.front();
                    q.pop();
                    q.push(peek);
                }
                x--;
            }
        }
        return q.front();
    }
};    
int main(){
    
    
    return 0;
}