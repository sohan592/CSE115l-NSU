#include<stdio.h>
#include<string.h>
void search(char arr[],char key){

int i,flag=0;
for(i=0;arr[i]!=NULL;i++){
    if (arr[i]==key){
          flag=1;
            break;
        }
}
if(flag==1){
    printf("Found");
}
  else
        printf("Not found");

}


int main (){
char str[100];
printf("Enter a string:");
scanf("%s",&str);
char ch;
printf("Enter search key:");
fflush(stdin);
scanf("%c",&ch);
search(str,ch);
return 0;
}
