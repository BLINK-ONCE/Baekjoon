#include <iostream>
#include <cstring>

using namespace std;

int main() {
	string str;
	int tmp, _max;
	int cnt[26] = { 0, };
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] <= 90) {
			tmp = str[i];
			cnt[tmp - 65]++;
		}
		else if (str[i] >= 97) {
			tmp = str[i];
			cnt[tmp - 97]++;
		}
	}
	_max = cnt[0];
	tmp = 0;
	for (int i = 1; i < 26; i++) {
		if (cnt[i] >= _max) {
			_max = cnt[i];
			tmp = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (_max == cnt[i]) {
			if (tmp == i) {
				char a = tmp + 65;
				cout << a;
				break;
			}
			else if (tmp != i) {
				cout << "?";
				break;
			}
		}
	}
	return 0;
}
