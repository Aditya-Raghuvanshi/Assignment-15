/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/

#include<stdio.h>

int main()
{
    int a[10],n;
    printf("enter the number of elements you want enter in the array ");
    scanf("%d",&n);
    printf("the first occurrence of adjacent duplicate element is %d",adj_dup(a,n));
    return 0;
}
int adj_dup(int b[],int N)
{
    int i,j;
    printf("enter %d numbers of array ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<N-1;i++)
    {
        j=i+1;
        if(b[i]==b[j])
        {
            return(b[i]);
        }
    }
    if(i==N-1)
        return(0);
}

