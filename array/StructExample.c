#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int id;
};

typedef struct student StudentData;

void display(StudentData s1){
	printf("Name: %s\n", s1.name);
	printf("ID: %d\n", s1.id);
}

int main(void){

   /* struct student{
	char name[20];
	int id;
     };

  typedef struct student StudentData;*/


	StudentData student1,student2;

	strcpy(student1.name, "Trisha");
	student1.id = 12345;
	strcpy(student2.name, "Jukta");
	student2.id = 4576;

	display(student1);
	display(student2);

	//printf("Name: %s\n", student1.name);
	//printf("ID: %d\n", student1.id);


	return 0;
}
