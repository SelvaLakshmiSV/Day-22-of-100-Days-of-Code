#include<stdio.h>
int main()
{
    int a,b,number,result;
    printf("Enter number of terms : ");
    scanf("%d",&number);
    a = 0;
    b = 1;
    for(int i = 1;i<=number;i++){
        printf("%d  ",a);
        result = a+b;
        a = b;
        b = result;
    }

    return 0;
}
