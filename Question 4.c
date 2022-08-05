/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>

int main()
{
    int a[5];
    rotate(a,5);
    return 0;

}
void rotate(int b[],int N)
{
    int i,j,m,n;
    printf("enter any %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("enter the no. of times you want rotate and in which direction ,for left direc. put m=1 else 2 for right");
    scanf("%d%d",&n,&m);
    if(m==1)
    {
       for(i=1;i<=n;i++)
    {
        int temp;
        temp=b[0];
        for(j=0;j<N-1;j++)
        {

            b[j]=b[j+1];
        }
        b[N-1]=temp;
    }
    for(i=0;i<N;i++)
     {
         printf("%d ",b[i]);
     }
    }
    else
    {
     for(i=1;i<=n;i++)
     {
        int temp;
        temp=b[N-1];
        for(j=N-1;j>=1;j--)
        {

            b[j]=b[j-1];
        }
        b[0]=temp;
     }
     printf("now our updated array is : ");
     for(i=0;i<N;i++)
     {
         printf("%d ",b[i]);
     }
    }
}
