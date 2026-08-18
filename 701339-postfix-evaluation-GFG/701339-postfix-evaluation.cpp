class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int>st;
        for(string s : arr)
        {
            if(s != "+" &&
               s != "-" &&
               s != "*" &&
               s != "/" &&
               s != "^"){
                   st.push(stoi(s));
               }
               else{
                   int b = st.top();
                   st.pop();
                   int a = st.top();
                   st.pop();
                   if(s == "+"){
                       st.push(a+b);
                   } else if (s == "-")
                    st.push(a - b);

                else if (s == "*")
                    st.push(a * b);

               else if (s == "/") {
    int ans = a / b;

    if (a % b != 0 && ((a < 0) != (b < 0)))
        ans--;

    st.push(ans);
}
                else if (s == "^")
                    st.push(pow(a, b));
               }
        }
        return st.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna