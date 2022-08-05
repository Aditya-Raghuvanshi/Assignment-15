/*Write a function in C to merge two arrays of the same size sorted in descending
order.*/
#include<stdio.h>

void merge(int [],int [],int );
void swap(int* ,int* );
int main()
{
    int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int a[n],b[n];
    merge(a,b,n);
    return 0;
}
void merge(int a[],int b[],int N)
{
    int i,j,c[2*N];
    printf("enter %d elements of first array a ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("enter %d elements of second array b ",N);
    for(i=0,j=N;i<N,j<2*N;i++,j++)
    {
        scanf("%d",&b[i]);
        c[j]=b[i];
    }
    for(i=1;i<2*N;i++)
    {
        for(j=0;j<2*N-i;j++)
        {
            if(c[j]<c[j+1])
                swap(&c[j],&c[j+1]);
        }
    }
    printf("merged array which is sorted in descending oder is : ");
    for(i=0;i<2*N;i++)
    {
        printf("%d ",c[i]);
    }

}
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}






