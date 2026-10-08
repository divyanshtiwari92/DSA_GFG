
class Solution {
public:
    int maxLength(std::vector<int>& arr) {
        std::unordered_map<int, int> sumMap;
        int maxLen = 0;
        int currentSum = 0;

        for (int i = 0; i < arr.size(); i++) {
            currentSum += arr[i];

            // Case 1: Subarray starting from index 0 has sum 0
            if (currentSum == 0) {
                maxLen = i + 1;
            }

            // Case 2: Prefix sum seen before -> zero-sum subarray found
            if (sumMap.find(currentSum) != sumMap.end()) {
                maxLen = std::max(maxLen, i - sumMap[currentSum]);
            } else {
                // Store only the first occurrence of currentSum to maximize subarray length
                sumMap[currentSum] = i;
            }
        }

        return maxLen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna