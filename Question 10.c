//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>

void frequency(int [],int );
int main()
{
    int n;
    printf("enter the number of elements you want enter in the array ");
    scanf("%d",&n);
    int a[n];
    frequency(a,n);
    return 0;

}
void frequency(int b[],int N)
{
    int i,j;
    printf("enter %d elements (pls do not enter zeroes) because this program will not determine frequency of 0 ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<N;i++)
    {
        int x=1;
        for(j=i+1;j<N;j++)
        {
            if(b[i]==b[j])
            {
                if(b[i]==0)
                    break;
                else
                {
                    x++;
                    b[j]=0;
                }
            }
        }
        if(b[i]==0)
            continue;
        else
            printf(" frequency of %d is %d \n",b[i],x);
    }
    return 0;
}


