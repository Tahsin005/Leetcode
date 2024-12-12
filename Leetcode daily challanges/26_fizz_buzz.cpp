#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/fizz-buzz/
        
*/         
#include <format>
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        for (int i = 0; i < n; i++) {
            if ((i + 1) % 3 == 0 and (i + 1) % 5 == 0) {
                ans.push_back("FizzBuzz");
            } else if ((i + 1) % 3 == 0) {
                ans.push_back("Fizz");
            } else if ((i + 1) % 5 == 0) {
                ans.push_back("Buzz");
            } else {
                string res = format("{}", i + 1);
                ans.push_back(res);
            }
        }

        return ans;
    }
}; 
int main(){
    
    
    return 0;
}