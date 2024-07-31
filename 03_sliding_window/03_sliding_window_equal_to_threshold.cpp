#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
        
*/          
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt = 0, i = 0, j = 0;
        int n = arr.size();

        int sum = 0;
        while (j < n) {
            sum += arr[j];
            if (j - i + 1 == k) {
                int mine = sum / k;
                if (mine >= threshold) cnt++;
                sum -= arr[i];
                i++;
            }
            j++;
        }

        return cnt;
    }
};
int main(){
    
    
    return 0;
}