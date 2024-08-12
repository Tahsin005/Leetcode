#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
        
*/  
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), mxsum = 0;
        for (int i = 0; i < k; i++) {
            mxsum += cardPoints[i];
        }

        int fromBeg = k, ans = mxsum;
        while (fromBeg) {
            mxsum -= cardPoints[fromBeg - 1];
            mxsum += cardPoints[n - 1];
            fromBeg--;
            n--;
            ans = max(ans, mxsum);
        }

        return ans;
    }
};
int main(){
    
    
    return 0;
}