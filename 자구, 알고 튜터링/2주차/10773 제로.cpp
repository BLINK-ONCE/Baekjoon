#include <iostream>
#include <cstring>

using namespace std;

int stack[100000], top = -1;

void push(int x) {
    stack[++top] = x;
}

void pop() {
    stack[top--] = 0;
}

int main() {
    int k, sum = 0; cin >> k;
    for (int i = 0; i < k; i++) {
        int command; cin >> command;

        if (command == 0) {
            if (top == -1) push(command);
            else pop();
        }
        else if (command != 0) {
            push(command);
        }
    }
    for (int i = 0; i < k; i++) {
        sum += stack[i];
    }
    cout << sum;
    return 0;
}
