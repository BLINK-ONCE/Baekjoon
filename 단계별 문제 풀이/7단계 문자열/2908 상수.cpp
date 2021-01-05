#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char num1[3], num2[3];
	for (int i = 0; i < 3; i++) {
		cin >> num1[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> num2[i];
	}
	int n1 = 0, n2 = 0;

	n1 = num1[0]-48 + ((num1[1] - 48) * 10) + ((num1[2] - 48) * 100);
	n2 = num2[0] - 48 + ((num2[1] - 48) * 10) + ((num2[2] - 48) * 100);

	if (n1 > n2) cout << n1;
	else cout << n2;

	return 0;
}
