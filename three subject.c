# include <stdio.h>
void main()
{
    char n[30];
    int rollno, total,phy,che,com;
    float per;
    printf("Input the roll number of the student : ");
    scanf("%d",&rollno);
     printf("Input the name of the student : ");
    scanf("%s",&n);
     printf("Input the marks of physics,chemistry and computer application : ");
    scanf("%d%d%d",&phy,&che,&com);
    printf("Roll No:%d\n",rollno);
    printf("Name of student:%s\n",n);
    printf("Marks in physics:%d\n",phy);
    printf("Marks in chemistry:%d\n",che);
    printf("Marks in computer application:%d\n",com);
    total=phy+che+com;
     printf("Total marks:%d\n",total);
     per=total/3;
     printf("Percentage=%.2f\n",per);
     if(per>=80)
        printf("First\n");
     else if(per>60)
         printf("Second\n");
     else
        printf("Third\n");


}
