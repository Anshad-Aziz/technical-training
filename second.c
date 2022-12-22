#include<stdio.h>

void main()
{
    char items;
    float bill,discount,amount,cost,quantity;
    printf("Enter THE NAME OF ITEM \n");
    scanf("%s",&items);
     printf("Enter THE COST \n");
    scanf("%f",&cost);
    printf("Enter the quantity \n");
    scanf("%f",&quantity);
    bill=(cost*quantity);
    if(bill<5000)
    {
        printf("Bill amount:%f\n",bill);
        printf("Discount:%f\n",discount=0);
        amount=(bill-discount);
         printf("*********************\n");
        printf("Total amount:%f\n",amount);
         printf("*********************\n");
    }
    else if(bill>=5000)
    {
       printf("Bill amount:%f\n",bill);
       discount=(bill*0.1);
       printf("Discount:%f\n",discount);
       amount=(bill-discount);
        printf("*********************\n");
        printf("Total amount:%f\n",amount);
         printf("*********************\n");
    }
    else if(bill>=10001)
    {
        printf("Bill amount:%f\n",bill);
        discount=(bill*0.20);
       printf("Discount:%f\n",discount);
       amount=(bill-discount);
        printf("*********************\n");
        printf("Total amount:%f\n",amount);
         printf("*********************\n");

    }
    else if(bill>=500001)
    {
        printf("Bill amount:%f\n",bill);
       discount=(bill*0.3);
       printf("Discount:%f\n",discount);
       amount=(bill-discount);
       printf("*********************\n");
        printf("Total amount:%f\n",amount);
         printf("*********************\n");
    }

    else
    {
        printf("Bill amount:%f\n",bill);
        discount=(bill*0.4);
        printf("Discount:%f\n",discount);
        amount=(bill-discount);
         printf("*********************\n");
        printf("Total amount:%f\n",amount);
         printf("*********************\n");

    }
}
