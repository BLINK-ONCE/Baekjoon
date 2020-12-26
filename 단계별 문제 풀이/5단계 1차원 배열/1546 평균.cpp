#include <iostream>

using namespace std;

int main(void) {
	int N, _max = 0;
	double avg = 0, arr[2000];
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N; i++) {
		if (_max < arr[i]) _max = arr[i];
	}
	for (int i = 0; i < N; i++) {
		arr[i + N] = (100 * arr[i] / _max);
	}
	for (int i = 0; i < N; i++) avg += arr[i + N];
	cout << avg / N;
	return 0;
}
