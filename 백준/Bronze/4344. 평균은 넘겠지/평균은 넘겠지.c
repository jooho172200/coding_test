#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int a, b, i, j;
    int score[1000];
    double avg;
    int sum = 0;
    int count;

   

    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        scanf("%d", &b);
        avg = 0.0;

        for (j = 0; j < b; j++) {
            scanf("%d", &score[j]);
            avg += score[j];
            
            
        }

        avg = avg / b;
        count = 0;

        for (j = 0; j < b; j++) {
            if (score[j] > avg) {
                count++;
            }
        }
 
        printf("%.3f%%\n", 100.0*count/b);
    }



    return 0;
}