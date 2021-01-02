#include <iostream>

using namespace std;

int main(void) {
	int N; cin >> N;
	int fact = 1;
	for (int i = 1; i <= N; i++) {
		fact *= i;
	}
	cout << fact;
	return 0;

}