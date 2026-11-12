class Solution {
public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] * arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = n - 1; i >= 2; i--) {
            int left = 0;
            int right = i - 1;

            while (left < right) {
                if (arr[left] + arr[right] == arr[i]) {
                    return true;
                } else if (arr[left] + arr[right] < arr[i]) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna