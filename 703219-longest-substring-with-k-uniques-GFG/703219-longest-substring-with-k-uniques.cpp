class Solution {
public:
    int longestKSubstr(string &s, int k) {
        int n = s.length();
        int i = 0, j = 0;
        int maxLen = -1;
        int count[26] = {0};
        int uniqueCount = 0;

        while (j < n) {
            if (count[s[j] - 'a'] == 0) {
                uniqueCount++;
            }
            count[s[j] - 'a']++;
            j++;

            while (uniqueCount > k) {
                count[s[i] - 'a']--;
                if (count[s[i] - 'a'] == 0) {
                    uniqueCount--;
                }
                i++;
            }

            if (uniqueCount == k) {
                maxLen = max(maxLen, j - i);
            }
        }

        return maxLen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna