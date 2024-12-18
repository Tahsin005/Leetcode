#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/?envType=daily-question&envId=2024-12-18

*/
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            int key = prices[i];
            bool discountPossible = false;
            int discountIdx = - 1;

            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= key) {
                    discountPossible = true;
                    discountIdx = j;
                    break;
                }
            }

            if (discountPossible and discountIdx != -1) {
                prices[i] -= prices[discountIdx];
            }
        }

        return prices;
    }
};
int main(){


    return 0;
}