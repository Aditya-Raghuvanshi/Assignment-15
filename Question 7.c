//Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>

int main()
{
    int a[10],n;
    printf("enter the number of the elements you want to enter in the array ");
    scanf("%d",&n);
    printf("number of duplicate elements are %d ",count_dup(a,n));
    return 0;
}
int count_dup(int b[],int N)
{
    int i,j,count=0;
    printf("enter %d numbers (pls do not enter triplicate elements)",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(b[i]==b[j])
            {
               count++;
            }
        }
    }
    return(count);
}
