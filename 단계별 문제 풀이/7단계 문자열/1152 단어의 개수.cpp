#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	int cnt = 0, i = 0;

	while (i < str.length()) {
		if (str[i] != 32) {
			cnt++;
			while (str[i] != 32) {
				if (i < str.length()) i++;
				else break;
			}
		}
		else i++;
	}
	cout << cnt;
	return 0;
}
