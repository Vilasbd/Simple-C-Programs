#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<i+1;j++)
        {
          printf("*");
        }
    }
}