#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a,b,c;
    int sum = 0;

    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        sum += (i + 1);
    }

    printf("%d", sum);
    return 0;
}