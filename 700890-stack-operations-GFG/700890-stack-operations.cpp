class myStack {
  private:
    // Define your stack
    int arr[1000];
    int top;
    
    
  public:
  
  myStack(){
      top = -1;
  }
    void push(int x) {
        // insert x into stack
        arr[++top ] = x;
    }

    void pop() {
        // remove top ele from stack
        if(top != -1){
            top--;
        }
    }

    int peek() {
        // return top of stack
        if(top == -1){
            return -1;
        }
        return arr[top];
    }

    int getSize() {
        // return current size of stack
        return top+1;
    }

    bool isEmpty() {
        // check whether stack is empty
        return top == -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna