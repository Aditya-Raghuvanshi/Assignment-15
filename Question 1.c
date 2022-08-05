//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>

int main()
{
    int a[10];
    printf("greatest number is %d",greatest(a,6));

    return 0;
}
int greatest(int b[],int N)
{
    int i,max;

    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<N;i++)
    {
        if(max<b[i])
            max=b[i];
    }
    return(max);
}
