#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	int cnt = 0, i = 0;

	while (i < str.length()) {
		if (str[i] != 32) {
			cnt++;
			i++;
			while (str[i] != 32) {
				i++;
			}
		}
		else i++;
	}
	cout << cnt;
}
