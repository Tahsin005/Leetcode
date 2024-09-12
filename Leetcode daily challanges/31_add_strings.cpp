#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/add-strings/
        
*/          
class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = stoi(num1), n2 = stoi(num2);

        int sum = n1 + n2;

        return to_string(sum);
    }
};
int main(){
    
    
    return 0;
}