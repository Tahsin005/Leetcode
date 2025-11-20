// https://leetcode.com/problems/next-greater-element-ii/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1);
        stack<int> stk;
        
        for (int i = 0; i < 2 * n; i++) {
            int idx = i % n;
            while (!stk.empty() && nums[idx] > nums[stk.top()]) {
                nge[stk.top()] = nums[idx];
                stk.pop();
            }
            if (i < n) {
                stk.push(idx);
            }
        }

        return nge;
    }

    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge = nextGreaterElement(nums);
        for (int i = 0; i < nums.size(); i++) {
            if (nge[i] != -1) {
                nums[i] = nge[i];
            } else {
                nums[i] = -1;
            }
        }
        return nums;
    }
};
