#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	int N, sum = 0;
	string str;
	cin >> N;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		sum += str[i] - 48;
	}
	cout << sum;
	return 0;
}
