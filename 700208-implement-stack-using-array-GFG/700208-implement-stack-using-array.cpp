class myStack {
    int *arr;
    int top;
    int size;

public:
    myStack(int n) {
        size = n;
        arr = new int[n];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int x) {
        if (isFull())
            return;

        top++;
        arr[top] = x;
    }

    void pop() {
        if (isEmpty())
            return;

        top--;
    }

    int peek() {
        if (isEmpty())
            return -1;

        return arr[top];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna