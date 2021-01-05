#include <iostream>

using namespace std;

void solveHanoi(int n, int start, int to, int bypass) {
	if (n == 1) printf("%d %d\n", start, to);
	else {
		solveHanoi(n - 1, start, bypass, to);
		printf("%d %d\n", start, to);
		solveHanoi(n - 1, bypass, to, start);
	}
}

int main() {
	int num; cin >> num;
	cout << (1 << num) - 1 << "\n";
	solveHanoi(num, 1, 3, 2);
}
