#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/move-pieces-to-obtain-a-string/description/?envType=daily-question&envId=2025-04-02

*/
class Solution {
    public:
        bool canChange(string start, string target) {
            queue<pair<char, int>> startQueue, targetQueue;

            for (int i = 0; i < start.size(); i++) {
                if (start[i] != '_') {
                    startQueue.push({start[i], i});
                }
                if (target[i] != '_') {
                    targetQueue.push({target[i], i});
                }
            }

            if (startQueue.size() != targetQueue.size()) return false;

            while (!startQueue.empty()) {
                auto [startChar, startIndex] = startQueue.front();
                startQueue.pop();
                auto [targetChar, targetIndex] = targetQueue.front();
                targetQueue.pop();

                if (startChar != targetChar or (startChar == 'L' and startIndex < targetIndex) or (startChar == 'R' and startIndex > targetIndex)) {
                    return false;
                }
            }

            return true;
        }
};
int main() {


    return 0;
}