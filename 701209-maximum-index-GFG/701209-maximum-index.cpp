class Solution {
public:
    int maxIndexDiff(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        vector<int> leftMin(n);
        vector<int> rightMax(n);

        leftMin[0] = arr[0];
        for (int i = 1; i < n; i++) {
            leftMin[i] = min(leftMin[i - 1], arr[i]);
        }

        rightMax[n - 1] = arr[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            rightMax[j] = max(rightMax[j + 1], arr[j]);
        }

        int i = 0, j = 0, maxDiff = -1;
        while (i < n && j < n) {
            if (leftMin[i] <= rightMax[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }

        return maxDiff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna