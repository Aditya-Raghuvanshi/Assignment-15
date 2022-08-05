//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>

int main()
{
    int a[10];
    printf("smallest number is %d",smallest(a,6));

    return 0;
}
int smallest(int b[],int N)
{
    int i,small;

    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    small=b[0];
    for(i=0;i<N;i++)
    {
        if(small>b[i])
            small=b[i];
    }
    return(small);
}
