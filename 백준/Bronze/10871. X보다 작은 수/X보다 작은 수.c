#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, i;
   

    scanf("%d %d", &a, &b);

    for (i = 0; i < a; i++) {
        scanf("%d", &c);
        if (c < b) {
            printf("%d ", c);
        }
    }


    return 0;
}