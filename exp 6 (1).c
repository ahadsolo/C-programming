/* name: Khan Abdul Ahad
  Uin : 251P003
  roll no: 03
  div : C1 */

#include <stdio.h>

void counter()    // void means no return type
{
    static int count = 0;   // static storage class (retains value)
    count++;
    printf("Counter Function Call : %d\n", count);
}

int main()
{
    printf("\t\t*** Storage Class ***\n\n");

    for(int i = 1; i <= 8; i++)
    {
        counter();   // counter function called 8 times
    }

    return 0;
}
