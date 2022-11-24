#include<stdio.h>
struct student
{
    char name[50];
    int id;
    float cgpa;
};
int main ()
{
    struct student s1,s2;
    printf("Enter the students 1 details:\n");
    printf("Enter name:");
    scanf("%s",&s1.name);
    printf("Enter id:");
    scanf("%d",&s1.id);
    printf("Enter cgpa:");
    scanf("%f",&s1.cgpa);
    printf("Enter the students 2 details:\n");
    printf("Enter name:");
    scanf("%s",&s2.name);
    printf("Enter id:");
    scanf("%d",&s2.id);
    printf("Enter cgpa:");
    scanf("%f",&s2.cgpa);
    printf("\n");
    if(s1.cgpa>s2.cgpa)
    {
        printf("Name:%s\n",s1.name);
        printf("ID:%d\n",s1.id);
        printf("CGPA:%.2f\n",s1.cgpa);
    }
    else
    {
        printf("Name:%s\n",s2.name);
        printf("Id:%d\n",s2.id);
        printf("CGPA:%.2f\n",s2.cgpa);
    }

    return 0;
}
