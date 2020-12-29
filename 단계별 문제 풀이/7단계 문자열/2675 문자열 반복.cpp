#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int R, T;
	string S;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string P;
		cin >> R >> S;
		for (int j = 0; j < S.length();j++) {
			for (int k = 0; k < R; k++) P = P + S[j];
		}
		cout << P << '\n';
	}
	return 0;
}
