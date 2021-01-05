#include <iostream>
#include <cstring>

using namespace std;

int stack[10001], top = -1;

void push(int x) {
    top++;
    stack[top] = x;
}

int empty() {
    if (top == -1) return 1;
    else return 0;
}

void pop() {
    if (top == -1) cout << "-1" << "\n";
    else {
        cout << stack[top] << "\n";
        stack[top] = 0;
        top--;
    }
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        char command[10];
        cin >> command;
        if (!strcmp(command, "push")) {
            int x; cin >> x;
            push(x);
        }
        else if (!strcmp(command, "top")) {
            if (empty() == 1)cout << "-1" << "\n";
            else cout << stack[top] << "\n";
        }
        else if (!strcmp(command, "pop")) {
            pop();
        }
        else if (!strcmp(command, "empty")) {
            cout << empty() << "\n";
        }
        else {
            cout << top + 1 << "\n";
        }
    }
    return 0;
}
