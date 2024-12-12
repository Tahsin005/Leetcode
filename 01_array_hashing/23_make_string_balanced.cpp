#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/
        
*/          
class Solution {
public:
    int minSwaps(string s) {
        int left = 0, right = 0;
        for (auto c: s) {
            if (c == '[') right++;
            else if (right > 0) right--;
            else left++;
        }

        return left / 2 + left % 2;
    }
};
int main(){
    
    
    return 0;
}