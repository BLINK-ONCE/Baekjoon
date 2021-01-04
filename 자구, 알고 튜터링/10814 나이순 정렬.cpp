#include <stdio.h>

struct member {
	int age;
	char name[100];
};

struct member arr[100000];
int order[100000];

int main(void) {
	int N; scanf("%d", &N);//회원의 수
	
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i].age);
		scanf("%c", &arr[i].name);
	}
	for (int i = 0; i < N; i++) {
		for (int j = N; j >= 0; j--) {
			
		}
	}

	return 0;
}
