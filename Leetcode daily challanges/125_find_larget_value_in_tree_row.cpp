#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/?envType=daily-question&envId=2024-12-25

*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if (root == nullptr) {
            return vector<int> {};
        }

        vector<int> ans;
        queue<TreeNode*> queue;
        queue.push(root);

        while (!queue.empty()) {
            int currLength = queue.size();
            int currMax = INT_MIN;

            for (int i = 0; i < currLength; i++) {
                TreeNode* node = queue.front();
                queue.pop();
                currMax = max(currMax, node->val);

                if (node->left) {
                    queue.push(node->left);
                }

                if (node->right) {
                    queue.push(node->right);
                }
            }

            ans.push_back(currMax);
        }

        return ans;
    }
};
int main(){


    return 0;
}