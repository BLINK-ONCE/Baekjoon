#include <iostream>

using namespace std;

int main(void){
	int A, B, C, mul, tmp;
	int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	cin >> A;
	cin >> B;
	cin >> C;
	mul = A*B*C;
	
	
	for (int i = 0; i < 10; i++){
		tmp = mul;
		while (tmp != 0) {
			if (tmp % 10 == i) arr[i]++;
			tmp /= 10;
		}
	}

	for (int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
	return 0;
	
}
