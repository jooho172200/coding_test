#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, i, j;
    int arr[1000];
    int max;
    float avg = 0;

    max = arr[0];

    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (i = 0; i < a; i++) {
        avg += ((float)arr[i] / max) * 100;

    }

   

    printf("%f", avg/a);


    return 0;
}