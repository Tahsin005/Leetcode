class Solution {
public:
    int absDifference(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int smallSum = 0, largeSum = 0;
        int n = arr.size();

        for (int i = 0; i < k; i++) {
            smallSum += arr[i];
            largeSum += arr[n - 1 - i];
        }
        return abs(largeSum - smallSum);
    }
};
