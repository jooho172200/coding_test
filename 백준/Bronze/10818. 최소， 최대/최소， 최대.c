#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, i;
    int max = -10000000;
    int min = 1000000;
   
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        scanf("%d", &b);
        if (b < min) min = b;
        if (b > max) max = b;
    }

    printf("%d %d", min, max);


    return 0;
}