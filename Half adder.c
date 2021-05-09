#include<stdio.h>
int main()
{
  int a,b,sum,carry;
  printf("Enter first number\n");
  scanf("%d",&a);
  printf("Enter second number\n");
  scanf("%d",&b);
  while(b!=0){
    sum = a^b;
    carry =(a&b)<<1;
    a = sum;
    b = carry;
  }
  printf("The sum is %d.",sum);
  return 0;
}
