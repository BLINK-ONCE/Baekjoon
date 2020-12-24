#include <iostream>

using namespace std;

int main(void){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int A = 1, B = 1;
	while (cin >> A >> B){
		cout << A+B << "\n";
	}
	return 0;
}
