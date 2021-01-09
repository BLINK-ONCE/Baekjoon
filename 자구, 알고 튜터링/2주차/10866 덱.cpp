#include <stdio.h>
#include <string.h>

int queue[10001];
int front = 0;
int rear = -1;

void clean(char arr[]) {
	int i;
	for (i = 0; i < 11; i++)
		arr[i] = '\0';
}

void push_front(int x) {
	rear++;
	for (int i = rear; i > 0; i--) {
		queue[i] = queue[i - 1];
	}
	queue[0] = x;
}

void push_back(int x) {
	queue[++rear] = x;
}

void pop_front(void) {
	if (rear == -1)
		printf("%d\n", -1);
	else {
		printf("%d\n", queue[0]);
		for (int i = 0; i < rear; i++) {
			queue[i] = queue[i + 1];
		}
		queue[rear] = 0;
		rear--;
	}
}

void pop_back(void) {
	if (rear == -1)
		printf("%d\n", -1);
	else {
		printf("%d\n", queue[rear]);
		queue[rear] = 0;
		rear--;
	}
}

void size(void) {
	printf("%d\n", rear + 1);
}
void empty(void) {
	if (rear != -1)
		printf("%d\n", 0);
	else
		printf("%d\n", 1);
}

int main(void) {
	int n, i, x;
	char command[11];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", command);
		if (!strcmp(command, "push_back")) {
			scanf("%d", &x);
			push_back(x);
		}
		else if (!strcmp(command, "push_front")) {
			scanf("%d", &x);
			push_front(x);
		}
		else if (!strcmp(command, "pop_front"))
			pop_front();
		else if (!strcmp(command, "pop_back"))
			pop_back();
		else if (!strcmp(command, "size"))
			size();
		else if (!strcmp(command, "empty"))
			empty();
		else if (!strcmp(command, "front")) {
			if (rear == -1)
				printf("%d\n", -1);
			else
				printf("%d\n", queue[0]);
		}
		else if (!strcmp(command, "back")) {
			if (rear == -1)
				printf("%d\n", -1);
			else
				printf("%d\n", queue[rear]);
		}
		clean(command); 
	}
	return 0;
}

