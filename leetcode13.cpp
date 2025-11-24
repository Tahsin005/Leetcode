class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int val = 0;
        vector<bool> ans;

        /*  When we read binary digits from left to right, each new bit affects the decimal value:
            The pattern: To append a new bit b to a number x:

            x new = x × 2 + b
            
            That's because in binary:
                Multiplying by 2 shifts all bits left (similar to multiplying by 10 in decimal)
                Adding the new bit b fills the rightmost position
        */

        for (auto& n : nums) {
            val = ((val << 1) + n) % 5;
            ans.push_back(val == 0);
        }

        return ans;
    }
};
