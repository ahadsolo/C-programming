#include <stdio.h>
int main()
{
    
    float phyics,chemistry,maths, sum;
    float average;
    printf("physics :");
    scanf("%f",&phyics);
    printf("chemistry :");
    scanf("%f",&chemistry);
    printf("math :");
    scanf("%f",&maths);
    sum = phyics + chemistry + maths;
    printf("sum =%f \n", sum);
    average =sum/3;
    printf("average =%f\n",average);

    if (average>=50){
  printf("You are Eligible");
      }
     else{
  printf("You are Not Eligible");
     }
    return 0;

}
