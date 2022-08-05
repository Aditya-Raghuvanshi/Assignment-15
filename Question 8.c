//Write a function in C to print all unique elements in an array.
#include<stdio.h>

int main()
{
    int a[10],n;
    printf("enter the number of elements you want to enter in the array ");
    scanf("%d",&n);
    print_uniq(a,n);
    return 0;
}
void print_uniq(int b[],int N)
{
    int i,j;
    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("unique no. in given array are : ");
    printf("%d ",b[0]);
    for(i=1;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if(b[i]==b[j])
                break;
            if(j==i-1)
                printf("%d ",b[i]);
        }
    }
}
