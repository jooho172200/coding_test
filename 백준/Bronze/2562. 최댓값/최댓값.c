#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i;
    int max,pos;
    int arr[9];

    max = arr[0];

    for (i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            pos = i + 1;
        }
    }

    printf("%d \n%d", max, pos);


    return 0;
}