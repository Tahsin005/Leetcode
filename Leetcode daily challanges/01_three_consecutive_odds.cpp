#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/three-consecutive-odds/description/?envType=daily-question&envId=2024-07-01
        
*/          
class Solution {
public:
    bool isValid(int i, int n) {
        return i < n;
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] & 1) {
                if (isValid(i + 1, n) and isValid(i + 2, n)) {
                    if ((arr[i + 1] & 1) and (arr[i + 2] & 1)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
int main(){
    
    
    return 0;
}