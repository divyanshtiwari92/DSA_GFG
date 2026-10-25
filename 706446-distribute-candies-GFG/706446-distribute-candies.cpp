class Solution{
public:
    int distCandy(Node* root){
        int ans=0;
        function<int(Node*)> dfs=[&](Node* r){
            if(!r)return 0;
            int l=dfs(r->left),rr=dfs(r->right);
            ans+=abs(l)+abs(rr);
            return r->data+l+rr-1;
        };
        dfs(root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna