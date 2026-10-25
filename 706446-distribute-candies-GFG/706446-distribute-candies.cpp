
class Solution {
public:
    int ans = 0;

    int dfs(Node* root) {
        if (!root) return 0;

        int l = dfs(root->left);
        int r = dfs(root->right);

        ans += abs(l) + abs(r);

        return root->data + l + r - 1;
    }

    int distCandy(Node* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna