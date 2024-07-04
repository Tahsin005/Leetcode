#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/merge-nodes-in-between-zeros/?envType=daily-question&envId=2024-07-04
        
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
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;

        ListNode* start = head;
        while (start) {
            ListNode* end = start;
            int sum = 0;
            while (end->val != 0) {
                sum += end-> val;
                end = end->next;
            }
            start-> val = sum;
            start->next = end->next;
            start = start->next;
        }

        return head;
    }
};
int main(){
    
    
    return 0;
}