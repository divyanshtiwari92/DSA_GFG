class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == 0) {
                ans.push_back({arr[left], arr[right]});
                int currleft = arr[left];
                int currright = arr[right];
                while (left < right && arr[left] == currleft) {
                    left++;
                }
                while (left < right && arr[right] == currright) {
                    right--; // Fixed: decrement right
                }
            } else if (sum < 0) {
                left++;
            } else {
                right--; // Fixed: decrement right
            }
        }
        return ans; // Fixed: moved inside the function
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna