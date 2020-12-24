#include<stdio.h>

int main(void){
    int A, B, T;
    int arr[10000];
    scanf("%d", &T);
    for (int i = 0; i < 2*T; i += 2){
        scanf("%d %d", &A, &B);
        arr[i] = A;
        arr[i + 1] = B;
    }
    for (int i = 0; i < 2*T; i += 2){
        printf("%d\n", arr[i] + arr[i+1]);
    }
    return 0;
}
