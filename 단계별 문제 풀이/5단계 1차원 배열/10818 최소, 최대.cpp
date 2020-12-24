#include <iostream>

using namespace std;

int main(void){
	int N, M, m;
	cin >> N;
	int arr[N];
	
	for (int i = 0; i < N; i++) cin >> arr[i];
	M = arr[0];
	m = arr[0];
	for (int i = 1; i < N; i++) {
		if (M < arr[i]) M = arr[i];
		if (m > arr[i]) m = arr[i];
	}
	cout << m << " " << M;
	return 0;
}
