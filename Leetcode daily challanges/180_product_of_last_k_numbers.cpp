#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/product-of-the-last-k-numbers/description/?envType=daily-question&envId=2025-02-14

*/
class ProductOfNumbers {
    private:
        vector<int> prefixProduct;
        int size = 0;
    
    public:
        ProductOfNumbers() {
            prefixProduct.push_back(1);
            size = 0;
        }
    
        void add(int num) {
            if (num == 0) {
                prefixProduct = {1};
                size = 0;
            } else {
                prefixProduct.push_back(prefixProduct[size] * num);
                size++;
            }
        }
    
        int getProduct(int k) {
            if (k > size) return 0;
    
            return prefixProduct[size] / prefixProduct[size - k];
        }
};
int main() {


    return 0;
}