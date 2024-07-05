#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/?envType=daily-question&envId=2024-07-05
        
*/          
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isCritical(int a, int x, int b) {
        return (a > x and x < b) or (a < x and x > b);
    }
    // vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    //     vector<int> points;
    //     vector<int> impossible = {-1, -1};
    //     while (head != NULL) {
    //         int x = head->val;
    //         points.push_back(x);
    //         head = head->next;
    //     }
    //     if (points.size() <= 3) {
    //         return impossible;
    //     }
    //     int cnt = 0;
    //     vector<int> idxs;
    //     for (int i = 1; i < points.size() - 1; i++) {
    //         if (isCritical(points[i - 1], points[i], points[i + 1])) {
    //             cnt++;
    //             idxs.push_back(i + 1);
    //         }
    //     }
    //     for (int x: idxs) {
    //         cout << x << " ";
    //     }
    //     if (cnt < 2) {
    //         return impossible;
    //     }
    //     int mn = INT_MAX, mx = abs(idxs[0] - idxs[idxs.size() - 1]);
    //     for (int i = 0; i < idxs.size() - 1; i++) {
    //         mn = min(mn, abs(idxs[i + 1] - idxs[i]));
    //     }
    //     vector<int> ans ={mn, mx};
    //     return ans;
    // }
};
int main(){
    
    
    return 0;
}