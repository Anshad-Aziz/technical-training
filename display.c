# include<stdio.h>
# include<stdlib.h>
# define MAX 4
int a[MAX],no,pos,elem;
 void create()
{
 int i;
 printf(" enter the size of the  array ");
 scanf("%d",&n);
 printf(" enter the element in array \n");
 for(i=0;i<n;i++)
 { 
 scanf("%d",a[i]);
 }
}
 void display()
{ 
 printf("ENTERED ELEMENT ARE .....\n");
 for(i=0;i<n; i++)
 { 
  printf("%d",a[i]);
 }
}
 void insert()
 {
  if (n==0)
{
 printf(" element is not present in array\n");
 return;
}
 do
{
 pintf("enter the position of element to be insert \n");
 scanf("%d",&pos);
 }while(pos>n);
 printf("enter the element to be insert in array\n");
 scanf("%d",&elem);
 for(i=n-1;i>=pos;i--)
 {
  a[i+1]=a[i];
}
 a[pos]=elem;
n=n+1;
 display();

   void delete()
 {
  if (n==0)
{
 printf(" element is not present in array\n");
 return;
}
 do
{
 pintf("enter the position of element to be delete \n");
 scanf("%d",&pos);
 }while(pos>n);
 printf("enter the element to be delete in array\n");
 scanf("%d",&elem);
 for( int i=pos;i<n-1;i++)
 {
  a[i]=a[i+1];
}
 
n=n+1;
 display();
} 
void main()
 { 
 int choice;
 while()
{
 printf("1: create \n");
 printf("2: display \n");
 printf("3: insert \n");
 printf("4: position \n");
 printf("5: exit() \n");
 printf("enter the choice\n");
  scanf("%d",&choice);
 switch(choice)
 { 
  case 1:create();
         break;
case 2:display();
         break;
case 3:insert();
         break;
case 4:delete();
         break;
case 5:exit();
         break;
default: printf("\n invaild\n");
}}}