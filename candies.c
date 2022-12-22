# include <stdio.h>
void main()
{
    int n=10,k=5,num;
    printf("ENTER THE NUMBER OF CANDIES");
    scanf("%d",&num);
    if(num>=1&&num<5)
    {
        printf("NUMBER OF CANDIES SOLD :%d\n",num);
        printf("NUMBER OF CANDIES LEFT:%d\n",n-num);

    }
    else
    {
        printf("INVALID INPUT\n");
        printf("NUMBER OF CANDIES LEFT:%d\n",n);
    }

}
