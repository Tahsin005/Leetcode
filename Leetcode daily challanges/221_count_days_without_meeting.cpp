#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-days-without-meetings/description/?envType=daily-question&envId=2025-03-24

*/
class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(), meetings.end());

            vector<vector<int>> mergedMeetings;
            for (const auto& meeting : meetings) {
                if (mergedMeetings.empty() or meeting[0] > mergedMeetings.back()[1]) {
                    mergedMeetings.push_back(meeting);
                } else {
                    mergedMeetings.back()[1] = max(mergedMeetings.back()[1], meeting[1]);
                }
            }

            int meetingDaysCount = 0;
            for (const auto& m : mergedMeetings) {
                meetingDaysCount += (m[1] - m[0] + 1);
            }

            return days - meetingDaysCount;
        }
};
int main() {


    return 0;
}