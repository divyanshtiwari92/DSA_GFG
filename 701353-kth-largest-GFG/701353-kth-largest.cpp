class Solution {
  public:
    int kthLargest(vector<int>& arr, int k) {
        // Use greater<int> to form a Min-Heap
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : arr) {
            minHeap.push(num);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        return minHeap.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna