#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/lemonade-change/description/
        
*/        
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0;
        bool possible = true;
        for (auto bill: bills) {
            if (bill == 5) five++;
            else if (bill == 10) {
                ten++;
                if (five) five--;
                else {
                    possible = false;
                    break;
                }
            } else {
                twenty++;
                if (five >= 3 or (five and ten)) {
                    if (five and ten) {
                        five--;
                        ten--;
                    } else if (five >= 3) {
                        five -= 3;
                    }
                } else {
                    possible = false;
                    break;
                }
            }
        }

        return possible;
    }
};  
int main(){
    
    
    return 0;
}