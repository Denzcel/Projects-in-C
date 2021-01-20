#include <stdio.h>

int main() {

    int num[5] = {0};   // This is the array.
    int sum;            // This is the sum of the array.
    float avg;          // This is the average of the array
    int iLarge, i, n;
    n = 5;

    iLarge = num [0];

    printf("Please enter five numbers, separated by spaces: \n");

        for(int i = 0; i < 5; ++i) {
        scanf("%d", &num[i]);
        }

        for(i = 0; i < 5; i++) {
            sum = sum + num[i];
        }

        avg = sum / 5;

    for( i = 0; i < 5; i++){
        if( num[i] > iLarge){
            iLarge = num[i];
        }
    }

    printf("The average of the five input numbers is %.2f\n", avg);
    printf("The highest of the five numbers is = %d\n", iLarge);

    return 0;
}

