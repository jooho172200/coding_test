#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[10];
    int a,i,j;
    int b = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        arr[i] = arr[i] % 42;
    }

    for (i = 0; i < 10; i++) {
        int count = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 0)
            b++;
    }
 
    printf("%d", b);

    return 0;
}