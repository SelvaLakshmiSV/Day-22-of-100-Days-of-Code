#include<stdio.h>
int main()
{
    int rows,n = 1;
    printf("Enter a number: ");
    scanf("%d",&rows);

    for(int row =1;row<=rows;row++,printf("\n")){
        for(int col=1;col<=row;col++){
            printf("%d ",n);
            n++;
        }
    }
    return 0;
}
