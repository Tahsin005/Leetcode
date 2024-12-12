#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/create-binary-tree-from-descriptions/description/?envType=daily-question&envId=2024-07-15
        
*/          
// class Solution {
// public:
//     TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
//         unordered_map<int, TreeNode*> mp;
//         unordered_set<int> hasParent;
//         for(int i = 0; i < descriptions.size(); i++) {
//             if(mp.find(descriptions[i][0]) == mp.end())
//                 mp[descriptions[i][0]] = new TreeNode(descriptions[i][0]);
//             if(mp.find(descriptions[i][1]) == mp.end())
//                 mp[descriptions[i][1]] = new TreeNode(descriptions[i][1]);
//             hasParent.insert(descriptions[i][1]);
//         }
        
//         TreeNode* root;
//         for(int i = 0; i < descriptions.size(); i++) {
//             if(descriptions[i][2]) {
//                 mp[descriptions[i][0]] -> left = mp[descriptions[i][1]];
//             } else {
//                 mp[descriptions[i][0]] -> right = mp[descriptions[i][1]];
//             }
//             if(hasParent.find(descriptions[i][0]) == hasParent.end()) {
//                 root = mp[descriptions[i][0]];
//             }
//         }
//         return root;
//     }
// };
int main(){
    
    
    return 0;
}