#include <iostream>

using namespace std;

int main(void){
	int sum = 0, tmp, arr[10];
	int remain[42] = { 0, };
	for (int i = 0; i < 10; i++) cin >> arr[i];
	for (int i = 0; i < 10; i++) {
		tmp = arr[i] % 42;
		remain[tmp]++;
	}
	for (int i = 0; i < 42; i++) if (remain[i] > 0) sum++;
	cout << sum;
	return 0;
}
