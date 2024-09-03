#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/sum-of-digits-of-string-after-convert/?envType=daily-question&envId=2024-09-03
        
*/          
class Solution {
public:
    int getLucky(string s, int k) {
        string number = "";

        for (char ch: s) {
            int x = ch - 'a' + 1;
            number += to_string(x);
        }

        
        while (k > 0) {
            int temp = 0;
            for (char x : number) {
                temp += x - '0'; 
            }
            number = to_string(temp);  
            k--;
        }

        
        
        return stoi(number);
    }
};
int main(){
    
    
    return 0;
}