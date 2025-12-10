/* Aim : WAP to find the length of a string without using library functions.
 name: Khan Abdul Ahad
  Uin : 251P003
  roll no: 03
  div : C1 */


#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;   // variable to count characters

    printf("\t\t*** String Length Finder ***\n\n\n");
    printf("Enter Your String : ");
    gets(str);   // taking string input

    while(str[length] != '\0')   // loop runs until null character
    {
        length++;
    }

    printf("\nString Length : %d Characters", length);

    return 0;
}
