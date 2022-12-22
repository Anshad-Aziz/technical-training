# include <stdio.h>
void main()
{
    char name[20];
    double unit,charge,amount;
    printf("Enter the consumer name : \n");
    scanf("%s",name);
    printf("Enter the unit consumed : \n");
    scanf("%lf",&unit);
    if(unit<=100)
    {
       charge=0;
       amount=(unit*charge);
       printf("%s has consumed %lf unit \n Hence the total amount to be paid is %lf Rupees only",name,unit,amount);
    }
    else if(unit>100&&unit<=200)
    {

       amount=(100*2.50)+((unit-100)*1.50)+20;

        printf("%s has consumed %lf unit \n Hence the total amount to be paid is %lf Rupees only",name,unit,amount);
    }
   else if(unit>200&&unit<=500)
    {

       amount=(100*0)+(100*2)+((unit-200)*3)+30;

        printf("%s has consumed %lf unit \n Hence the total amount to be paid is %lf Rupees only",name,unit,amount);
    }
    else
    {
        amount=(100*0)+(100*3.50)+(300*4.60)+((unit-500)*6.60)+50;

         printf("%s has consumed %lf unit \n Hence the total amount to be paid is %lf Rupees only",name,unit,amount);
    }



}
