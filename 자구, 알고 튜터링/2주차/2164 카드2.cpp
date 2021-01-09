#include <stdio.h>

int arr[1000000];

int main() {
	int front = 1, back, cnt = 0;
	scanf("%d", &back);

	for (int i = 1; i <= back; i++) arr[i] = i;

	if (back == 1) printf("1");

	while (front != back) {
		arr[front++] = 0;
		if (front == back) {
			printf("%d", arr[front]);
			break;
		}
		back++;
		arr[back] = arr[front];
		arr[front] = 0;
		front++;
	}
	return 0;
}
