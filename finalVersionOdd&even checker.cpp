#include <stdio.h>

 main() {

    int number;
    printf("----- Odd & Even Checker -----\n");
    printf("Enter the number you want to check: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number you entered is even.\n");
    } else {
        printf("The number you entered is odd.\n");
    }

}

