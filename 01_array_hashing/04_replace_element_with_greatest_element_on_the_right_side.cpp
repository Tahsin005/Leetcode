#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/

        
*/  
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx = -1;
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            mx = max(arr[i], mx);
            arr[i] = mx;
        }
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = -1;
        return arr;
    }
};        
int main(){
    
    
    return 0;
}