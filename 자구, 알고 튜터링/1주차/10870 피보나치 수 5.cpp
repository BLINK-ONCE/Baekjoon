#include <iostream>

using namespace std;

int main(void){
	int n; cin >> n;
	int Fib = 0, tmp1, tmp2, t;
	if (n == 0) cout << 0;
	else if (n == 1) cout << 1;
	else if (n == 2) cout << 1;
	else {
		tmp1 = 1; tmp2 = 1;
		for (int i = 3; i <= n; i++){
			Fib = tmp1 + tmp2;
			tmp1 = tmp2; tmp2 = Fib;
		}
		cout << Fib;
	}
	return 0;
}
