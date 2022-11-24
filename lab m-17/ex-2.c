#include<stdio.h>
struct BirthCertificate{
   int day;
   int month;
   int year;
   char name[100];
   char fatherName[100];
   char motherName[100];

};
int main (){
    struct BirthCertificate person1,person2;
    printf("Enter the info:\n");
    printf("Enter Person1 Name:");
    gets(person1.name);
    fflush(stdin);
    printf("\nEnter day/month/year:");
    scanf("%d%d%d",&person1.day,&person1.month,&person1.year);
    fflush(stdin);
    printf("\nEnter fatherName:");
    gets(person1.fatherName);
    fflush(stdin);
    printf("\nEnter motherName:");
    gets(person1.motherName);
    fflush(stdin);
    printf("\nEnter Person2 Name:");
    gets(person2.name);
    fflush(stdin);
    printf("\nEnter day/month/year:");
    scanf("%d%d%d",&person2.day,&person2.month,&person2.year);
    fflush(stdin);
    printf("\nEnter fatherName:");
    gets(person2.fatherName);
    fflush(stdin);
    printf("\nEnter motherName:");
    gets(person2.motherName);
    fflush(stdin);

   if(person1.year<person2.year){
    printf("\nName:%s",person2.name);
    printf("\nFathersName:%s",person2.fatherName);
    printf("\nMothersName:%s",person2.motherName);
   }
   else
   {
    printf("\nName:%s",person1.name);
    printf("\nFathersName:%s",person1.fatherName);
    printf("\nMothersName:%s",person1.motherName);
   }


return 0;
}
