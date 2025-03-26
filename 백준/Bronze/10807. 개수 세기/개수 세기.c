#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, i;
    int count = 0;
    int arr[100];

    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        scanf("%d", &b);
        arr[i]= b;
    }

    scanf("%d", &c);

    for (i = 0; i < a; i++) {
        if (arr[i] == c) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}