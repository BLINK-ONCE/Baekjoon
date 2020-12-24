#include <iostream>

using namespace std;

int main(void){
	int N = 0, cycle = 0,
	 ten, one, tmp;
	cin >> N;
	if (N < 10){
			ten = 0;
			one = N;
		}
		else {
			ten = N/10;
			one = N%10;
		}
	
	while(1){
		
		tmp = one;
		one = tmp + ten;
		ten = tmp;
		if (one >= 10) one = one%10;
		
		cycle++;
		
		if (N == (ten*10+one)) break;
	}
	
	cout << cycle;
	return 0;
}
