# include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three sides");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
        printf("equilateral\n");
    else if (a==b||a==c||b==c)
        printf("Isosceles");
    else
        printf("Scalene");

}
