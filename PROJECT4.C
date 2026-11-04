#include<stdio.h>
struct student
{
 char name[20];
 int roll;
 float mark;
 char city[20];
 char dream[20];
};
void read(struct student s[10])
{
int i;
for(i=0;i<10;i++);
printf("Enter the name:\n");
scanf("%s",s[i].name);
printf("Enter the rollno:\n");
scanf("%d",s[i].roll);
printf("Enter the mark:\n");
scanf("%s",s[i].mark);
printf("Enter the city:\n");
scanf("%s",s[i].city);
printf("Enter the dream:\n");
scanf("%d",s[i].dream);
}
void display(struct student s[10])
{
int i;
printf("-------Student details-------\n");
for(i=0;i<10;i++);
{
printf("Student Name:%s\n",s[i].name);
printf("Student Roll no:%s\n",s[i].roll);
printf("Student Mark:%s\n",s[i].mark);
printf("Student City:%s\n",s[i].city);
printf("Student Dream:%s\n",s[i].dream);
}
}
int main()
{
int i;
struct student s[10];
read(s);
display(s);
return 0;
}