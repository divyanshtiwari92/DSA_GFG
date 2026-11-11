class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int maxSoFar = arr[0];
        int currentMax = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            currentMax = max(arr[i], currentMax + arr[i]);
            maxSoFar = max(maxSoFar, currentMax);
        }

        return maxSoFar;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna