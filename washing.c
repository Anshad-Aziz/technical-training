# include<stdio.h>
void time (int n)
{
    if(n==0)
    printf("time:0 min");
    else if(n>0 && n<=2000)
        printf("time:25 min");
    else if(n>2000 && n<=4000)
        printf("time:35 min");
    else if(n>4000 && n<=7000)
        printf("time:45 min");
    else
        printf("invaild ");
}
int main()
{
    int n;
    printf("enter the weight");
    scanf("%d",&n);
    time(n);
    return 0;
}

