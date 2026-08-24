class Solution {
  public:
    void pb(deque<int>& dq, int x) {
        // code here
    dq.push_back(x);
    }

    void ppb(deque<int>& dq) {
        // code here
        if(!dq.empty()){
        dq.pop_back();}
    }

        
    int front_dq(deque<int>& dq) {
        // code here
        if(!dq.empty()){
            return dq.front();
        }
        return -1;
    }
        

    void pf(deque<int>& dq, int x) {
        // code here
        dq.push_front(x);
    }
    
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna