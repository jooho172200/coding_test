#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[6] = { 1,1,2,2,2,8 };
    int rra[6];
    int rar[6];

    int i;

    for (i = 0; i < 6; i++) {
        scanf("%d", &rra[i]);
        rar[i] = arr[i] - rra[i];
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", rar[i]);
    }

    return 0;
}