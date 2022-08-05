/*Write a function in C to read n number of values in an array and display it in reverse
order.*/
#include<stdio.h>
void rev(int [],int );
int main()
{
    int a[10],n;
    printf("enter the numbers of values you want to enter in the array ");
    scanf("%d",&n);
    rev(a,n);
    return 0;
}
void rev(int b[],int N)
{
   int i,j,c[N];
   printf("enter %d numbers ",N);
   for(i=0,j=N-1;i<N,j>=0;i++,j--)
   {
       scanf("%d",&b[i]);
       c[j]=b[i];
   }

   printf("reversed array is : ");
   for(i=0;i<N;i++)
   {
       printf("%d ",c[i]);
   }
}
