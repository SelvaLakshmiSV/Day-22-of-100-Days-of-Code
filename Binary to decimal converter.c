#include<stdio.h>
int main()
{
    int rem,dec,binary,weight;
    dec = 0;
    weight = 1;
    printf("Enter a binary digit :\n");
    scanf("%d",&binary);
    while(binary != 0)
    {
        rem = binary % 10;
        dec = dec + rem * weight;
        binary = binary / 10;
        weight = weight * 2;

    }
    printf("Decimal equivalent of the binary number is %d.",dec);
    return 0;
}
