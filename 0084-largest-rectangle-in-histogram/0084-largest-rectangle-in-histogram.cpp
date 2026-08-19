class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        stack<int> st;
        for(int i = 0; i<= n;i++){
             int currheight ;
            if(i == n) currheight = 0;
            else{ currheight = heights[i];
            }

            while(!st.empty() && heights[st.top()] > currheight){
                int height = heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width = i;
                else width = i - st.top() -1;
                int area = height* width;
                maxArea = max(area , maxArea);
            }
            st.push(i);
        }
        return maxArea;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna