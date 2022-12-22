# include<stdio.h>
void main()
{
    int n,i,j,space,t=1;
    scanf("%d",&n);
    space=n+4-1;
    for(i=1;i<=n;i++)
    {

        for(n=space;n>=1;n--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",t++);
        }

    }
}
