#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/number-of-recent-calls/description/?envType=study-plan-v2&envId=leetcode-75

*/
#include <vector>

class RecentCounter {
private:
    std::vector<int> records;
    int start;

public:
    RecentCounter() : start(0) {}

    int ping(int t) {
        records.push_back(t);
        while (records[start] < t - 3000) {
            start++;
        }
        return records.size() - start;
    }
};

int main() {


    return 0;
}