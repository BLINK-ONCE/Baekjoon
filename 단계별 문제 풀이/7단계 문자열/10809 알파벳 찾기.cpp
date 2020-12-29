#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int arr[26] = { -1, };
	string S;
	cin >> S;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < S.length(); j++) {
			if (S[j] - 97 == i) {
				arr[i] = j;
				break;
			}
			arr[i] = -1;
		}
	}
	for (int i = 0; i < 26; i++) cout << arr[i] << " ";
	return 0;
}
