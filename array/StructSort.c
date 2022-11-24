#include <stdio.h>
#define NUM_STUDENTS 3
struct student
{
	int studentID;
	char name[20];
	int score;
	char grade;
};
typedef struct student StudentData;
void Read (StudentData student[]);
void CountGrade (StudentData student[]);
void Sort (StudentData student[]);

void main ( )
{
	StudentData students[NUM_STUDENTS];
	Read(students);
	//CountGrade(students);
	Sort(students);
}
void Read (StudentData student[])
{
	int i;
	for (i = 0; i < NUM_STUDENTS; i++)
	{
		printf("Enter the studentID: ");
		scanf("%d", &student[i].studentID);
		fflush(stdin);
		printf("Enter student name: ");
		gets(student[i].name);
		fflush(stdin);
		printf("Enter the score: ");
		scanf("%d", &student[i].score);
		fflush(stdin);
		printf("\n");

	}
}
void CountGrade (StudentData student[])
{
   int i;
   for (i = 0; i < NUM_STUDENTS; i++)
   {
	if (student[i].score > 90)
	   student[i].grade = 'A';
	else if (student[i].score > 80)
           student[i].grade = 'B';
	else if (student[i].score > 65)
	    student[i].grade = 'C';
	else if (student[i].score > 50)
	    student[i].grade = 'D';
	else
	    student[i].grade = 'F';
    printf("The grade for %s is %c\n",student[i].name,student[i].grade);

   }
}


void Sort (StudentData student[])
{
    int i,j;
    StudentData temp;

    for(i=0;i<NUM_STUDENTS-1;i++)
        for(j=i+1;j<NUM_STUDENTS;j++)
            if(strcmp(student[i].name,student[j].name) > 0 )
            {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
             }

     printf("\n");
     for(i=0;i<NUM_STUDENTS;i++)
        printf("%d %s %d\n",student[i].studentID,student[i].name,student[i].score);

}
















