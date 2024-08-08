#include<stdio.h>
void main()
{
    int n,i,j,temp,a[100];
    printf("enter the valu for n :\n");
    scanf("%d",&n);
    printf("enter %d elements in to the array :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the unsorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nthe sorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}