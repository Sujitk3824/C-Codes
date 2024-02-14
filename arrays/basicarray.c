#include<stdio.h>
int main ()
{
 int arr[5];
    // printf("%d",arr[2]);
  
for (int i = 0; i < 5; i++)
{
    printf("Enter the number %d",i+1);
    scanf("%d",&arr[i]);
}
for (int i = 0; i < 5; i++)
{
    printf("%d",arr[4]);
}




    return 0;
}