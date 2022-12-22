# include<stdio.h>
void main()
{
    int temp;
    printf("test data");
    scanf("%d",&temp);
    if(temp<0)
        printf("Freezing Weather\n");
    else if (temp<=10)
        printf("Very cold Weather");
    else if (temp<=20)
        printf(" cold Weather");
    else if (temp<=30)
        printf("Normal");
    else
        printf("Very hot");
}
