class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        if(p == 0) return 1;
        return n*recursivePower(n,p-1);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna