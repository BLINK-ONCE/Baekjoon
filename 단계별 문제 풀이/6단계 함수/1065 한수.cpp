#include <stdio.h>

void getHansu(int N){
	int hansu = 0, tmp[3], k, t;
	for (int i = 1; i <= N; i++){
		if (i < 100) hansu = i;
		else if (i == 1000) break;
		else {
			k = 0; t = i;
			while (k < 3){
				tmp[k] = t % 10;
				t /= 10; k++;
			}
			if (tmp[1] - tmp[0] == tmp[2] - tmp[1]) hansu++;
		}
	}
	printf("%d", hansu);
}

int main(void){
	int N;
	scanf("%d", &N);
	getHansu(N);
	return 0;
}
