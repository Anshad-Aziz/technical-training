# include<stdio.h>
# include<string.h>
# include<stdlib.h>
#define max 4
int i,front=0,rear=0;
char item,q[max];
void insert (char item)
{

    if(front==(rear+1)%max)
    {
        printf("circular queue is under flow\n");
        return;
    }
    else
    {
        rear=(rear+1)%max;
        scanf("%c",&item);
        q[rear]=item;
    }
}
void delete()
{
    if (front==rear)
    {
        printf("circular queue is over flow");
        return;
    }
    else
    {
        front=(front+1)%max;
        printf("deleted element is %c",q[front]);

    }
}
void display()
{
    for(int i=(front+1)%max;i!=rear;i=(i+1)%max)
        printf("%c",q[i]);

}
 int main(){

  int choice;
  while(1)
  {
      printf("enter the choice");
      printf("1=insert 2=delete  3=display  4=exit");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1: printf("enter the char");
          scanf("%c",&item);
          insert(item);

          break;
          case 2: delete();
          break;
          case 3: display();
          break;
          case 4: exit(0);
          break;
      }
  }
 }
