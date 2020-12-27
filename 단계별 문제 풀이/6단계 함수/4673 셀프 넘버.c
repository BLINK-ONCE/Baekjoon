#include <stdio.h>

void getSelfNumber(int n){
	int notSelfNumber[10000] = { 0, }, tmp;
	for (int i = 0; i < n; i++){
		for (int j = 1; j < n; j++){
			tmp = i * j + (i * j / 1000 % 10) + (i * j / 100 % 10)+ (i * j / 10 % 10)+ (i * j % 10);
			if (tmp > 10000) break;
			else notSelfNumber[tmp-1]++;
		}
	}
	for (int i = 0; i < n; i++){
		if (notSelfNumber[i] == 0) printf("%d\n", i + 1);
	}
}

int main(void){
	int n;
	
	getSelfNumber(10000);
	
	return 0;
}
