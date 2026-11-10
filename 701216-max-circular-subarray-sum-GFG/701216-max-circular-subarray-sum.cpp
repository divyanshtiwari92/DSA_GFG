
class Solution {
public:
    int maxCircularSum(vector<int>& arr) {
        int total_sum = 0;

        int max_ending_here = 0, max_kadane = arr[0];
        int min_ending_here = 0, min_kadane = arr[0];

        for (int x : arr) {
            total_sum += x;

            // Standard Kadane's to find Max Subarray Sum
            max_ending_here = max(x, max_ending_here + x);
            max_kadane = max(max_kadane, max_ending_here);

            // Inverted Kadane's to find Min Subarray Sum
            min_ending_here = min(x, min_ending_here + x);
            min_kadane = min(min_kadane, min_ending_here);
        }

        // Corner Case: If all elements are negative, max_kadane is the max element
        if (max_kadane < 0) {
            return max_kadane;
        }

        // Return maximum of non-wrapping and wrapping subarray sum
        return max(max_kadane, total_sum - min_kadane);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna