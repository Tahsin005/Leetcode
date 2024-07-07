#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/water-bottles/description/?envType=daily-question&envId=2024-07-07
        
*/  
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt_bottle = numBottles;
        int khali_bottle = numBottles;
        while (khali_bottle > 0) {
            if (khali_bottle >= numExchange) {
                khali_bottle -= numExchange;
                cnt_bottle++;
                khali_bottle++;
            } else if (khali_bottle < numExchange) {
                break;
            }
        }
        return cnt_bottle;
    }
};        
int main(){
    
    
    return 0;
}