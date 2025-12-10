#include <stdio.h>

int main() {
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);  

    if (number % 2 == 0) {
        printf("It is an Even Number");
    } else {
        printf("It is an Odd Number");
    }

    return 0;
}
