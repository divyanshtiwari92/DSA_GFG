class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
       int ans = 0;
int n = arr.size()+1;
         // XOR from 1 to N
         for (int i = 1; i <=n; i++) {
             ans ^= i;
         }

         // XOR all array elements
         for (int x : arr) {
             ans ^= x;
         }

      

         return ans;
     }   
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna