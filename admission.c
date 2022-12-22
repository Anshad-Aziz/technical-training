# include<stdio.h>
void main()
{
 int maths,phy,chem;
 printf(" physics : ");
 scanf("%d",&phy);
  printf(" chemistry : ");
 scanf("%d",&chem);
   printf(" mathematics : ");
 scanf("%d",&maths);
 if(maths>=65 &&phy>=55&&chem>=50)
    printf("The candidate is eligible for admission");
 else
    printf("The candidate is  not eligible for admission");


}
