#include <stdio.h>

int main(void){
	int N, str[100] = { 0, }, sum = 0;
	scanf("%d", &N);
	scanf("%s", str);
	for (int i = 0; i < 100; i++){
		sum += str[i];
	}
	printf("%d", sum);
	return 0;
}
