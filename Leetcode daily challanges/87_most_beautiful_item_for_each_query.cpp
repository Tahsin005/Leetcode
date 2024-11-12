#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/most-beautiful-item-for-each-query/description/?envType=daily-question&envId=2024-11-12

*/
class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> ans(queries.size());

        sort(items.begin(), items.end(), [](vector<int> &a, vector<int> &b) {
            return a[0] < b[0];
        });

        vector<vector<int>> queriesWithIndices(queries.size(), vector<int>(2));

        for (int i = 0; i < queries.size(); i++) {
            queriesWithIndices[i][0] = queries[i];
            queriesWithIndices[i][1] = i;
        }

        sort(queriesWithIndices.begin(), queriesWithIndices.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });

        int itemIndex = 0;
        int maxBeauty = 0;

        for (int i = 0; i < queries.size(); i++) {
            int query = queriesWithIndices[i][0];
            int originalIndex = queriesWithIndices[i][1];

            while (itemIndex < items.size() and items[itemIndex][0] <= query) {
                maxBeauty = max(maxBeauty, items[itemIndex][1]);
                itemIndex++;
            }

            ans[originalIndex] = maxBeauty;
        }

        return ans;
    }
};
int main(){


    return 0;
}