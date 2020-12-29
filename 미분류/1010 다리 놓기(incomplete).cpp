#include <iostream>
#include <cmath>

using namespace std;

int fact(int n) {
	int sum = 0;
	if (n > 1) {
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
	}
	else sum = 1;
	return sum;
}

int main(void) {
	int N, M, T, _case = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		_case = fact(N + M - 1) / ((N - 1) * fact(M));
		cout << _case << endl;
		_case = 0;
	}
	return 0;
}
