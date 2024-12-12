#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/prime-subtraction-operation/description/?envType=daily-question&envId=2024-11-11

*/
class Solution {
public:
    bool prime(int x) {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }

        return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int bound = nums[0];

            if (i != 0) {
                bound = nums[i] - nums[i - 1];
            }

            if (bound <= 0) {
                return false;
            }

            int largest_prime = 0;

            for (int j = bound - 1; j >= 2; j--) {
                if (prime(j)) {
                    largest_prime = j;
                    break;
                }
            }

            nums[i] -= largest_prime;
        }

        return true;
    }
};
int main(){


    return 0;
}