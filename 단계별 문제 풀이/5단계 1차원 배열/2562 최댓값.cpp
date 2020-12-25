#include <iostream>

using namespace std;

int main(void){
	int arr[9];
	int _max = 0, order;
	
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (_max < arr[i]) {
			_max = arr[i];
			order = i+1;
		}
	}
	cout << _max << endl << order;
	return 0;
}
