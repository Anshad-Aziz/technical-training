#include<stdio.h>
void main()
{
    int n,a[100],sum=0,i;
    printf("enter the number of elements ");
    scanf("%d",&n);
    printf("enter the elements");
    for( int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
        }
    printf("the sum of elements is %d",sum);
}
