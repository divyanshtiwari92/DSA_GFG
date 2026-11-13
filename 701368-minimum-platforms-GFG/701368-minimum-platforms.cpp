class Solution {
public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // Sort arrival and departure times
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int n = arr.size();
        int plat_needed = 0, max_platforms = 0;
        int i = 0, j = 0;

        // Traverse both arrays simultaneously
        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                // A train arrives before or when the previous one departs
                plat_needed++;
                i++;
            } else {
                // A train departs, freeing up a platform
                plat_needed--;
                j++;
            }
            // Track the maximum platforms needed at any point
            max_platforms = max(max_platforms, plat_needed);
        }

        return max_platforms;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna