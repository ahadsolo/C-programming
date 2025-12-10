/* name: Khan Abdul Ahad
  Uin : 251P003
  roll no: 03
  div : C1 */

#include <stdio.h>

// Recursive function to find factorial
int factorialRecursive(int num)
{
    if(num <= 1)   // If number is 0 or 1 → factorial = 1
        return 1;

    return num * factorialRecursive(num - 1); // Recursive call
}

int main()
{
    int num;

    printf("\t\t*** Recursive Factorial ***\n\n");
    printf("Enter Number = ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorialRecursive(num));

    return 0;
}
