// #include<stdio.h>
// int main()
// {
// float p = 100;
// float r = 40;
// float t = 2;
// float si = (p+r+t)/100;
// printf("The Simple Intrest is : %f",si);
//   return 0;
// }

#include<stdio.h>
int main()
{
    float principal,rate,time,si;
  printf("Enter the principle : ");
  scanf("%f",&principal);
printf("Enter the Rate : ");
  scanf("%f",&rate);
printf("Enter the Time : ");
  scanf("%f",&time);
 si = (principal+rate+time)/100;
printf("Your Simple Intrest is : %f",si);
  return 0;
}