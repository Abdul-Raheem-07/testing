#include<iostream>
using namespace std;

class Stack {
    int arr[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int val) {
        if(topIndex < 99) {
            topIndex++;
            arr[topIndex] = val;
        }
    }

    void pop() {
        if(topIndex >= 0) {
            topIndex--;
        }
    }

    int top() {
        if(topIndex >= 0)
            return arr[topIndex];
        return -1;
    }

    bool empty() {
        return topIndex == -1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    return 0;
}
