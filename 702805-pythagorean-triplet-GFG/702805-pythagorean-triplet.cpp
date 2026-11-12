
class Solution {
public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int mx = *max_element(arr.begin(), arr.end());

        vector<bool> present(mx + 1, false);

        for (int x : arr)
            present[x] = true;

        for (int a = 1; a <= mx; a++) {
            if (!present[a]) continue;

            for (int b = a + 1; b <= mx; b++) {
                if (!present[b]) continue;

                int sum = a * a + b * b;
                int c = sqrt(sum);

                if (c <= mx && c * c == sum && present[c])
                    return true;
            }
        }

        return false;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna