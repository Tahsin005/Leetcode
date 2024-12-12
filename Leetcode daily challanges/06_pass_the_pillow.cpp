#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/pass-the-pillow/description/?envType=daily-question&envId=2024-07-06
        
*/          
class Solution {
public:
    int passThePillow(int n, int time) {
        int idx = 1;
        bool flag = true;
        while (time--) {
            if (flag) {
                idx++;
                if (idx == n) flag = !flag;
            } else {
                idx--;
                if (idx == 1) flag = !flag;
            }
        }

        return idx;
    }
};
int main(){
    
    
    return 0;
}