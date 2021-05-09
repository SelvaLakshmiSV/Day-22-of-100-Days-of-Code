#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    if(b>0){
        while(b!=0){
            a++;
            b--;
        }
    }
    else if(b<0){
        while(b!=0){
            a--;
            b++;
        }
    }
    printf("The sum is %d.",a);

    return 0;
}
