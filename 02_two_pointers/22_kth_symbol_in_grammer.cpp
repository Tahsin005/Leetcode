#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/k-th-symbol-in-grammar/description/
        
*/  
class Solution {
public:
    int kthGrammar(int n, int k) {
        int result = 0;
        int left = 1;
        int right = pow(2, n - 1);

        for (int i = n - 1; i > 0; i--) {
            int mid = left + (right - left) / 2;
            if (k <= mid) {
                right = mid;
            } else {
                left = mid + 1;
                result = !result;
            }
        }
        return result;
    }
};        
int main(){
    
    
    return 0;
}