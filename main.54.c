#include <stdio.h>                          
int main()
{
  int arr[10],sum=0,i;
  printf("enter the values \n");
  for(i=0;i<10;i++)
  {
    printf("enter the arr[%d] :",i);
  scanf("%d",&arr[i]);
  sum = sum + arr[i] ;
  }
  printf("sum of numbers=%d",sum);
}