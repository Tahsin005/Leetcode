#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-time-to-repair-cars/submissions/1575557413/?envType=daily-question&envId=2025-03-16

*/
class Solution {
    public:
        long repairCars(vector<int>& ranks, int cars) {
            int minRank = ranks[0], maxRank = ranks[0];

            for (int rank : ranks) {
                minRank = min(minRank, rank);
                maxRank = max(maxRank, rank);
            }

            vector<int> freq(maxRank + 1);
            for (int rank : ranks) {
                freq[rank]++;
            }

            long long low = 1, high = 1LL * minRank * cars * cars;

            while (low < high) {
                long long mid = (low + high) / 2;
                long long carsRepaired = 0;

                for (int rank = 1; rank <= maxRank; rank++) {
                    carsRepaired += freq[rank] * (long long)sqrt(mid / (long long)rank);
                }

                if (carsRepaired >= cars) {
                    high = mid;
                } else {
                    low = mid + 1;
                }
            }

            return low;
        }
};
int main() {


    return 0;
}