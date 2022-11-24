#include<stdio.h>
int main (){

char ch;
    printf("enter a character:");
    scanf("%c",&ch);

    switch((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
           {

case 1:
switch(ch>='A' && ch<='Z'){
    case 1:
    printf("%c",ch+32);
    break;
    case 0:
    printf("%c",ch);
    break;
}
   break;
case 0:
    printf("invalid");

    }
//if-else
#include<stdio.h>
int main (){

   char ch;
    printf("enter a character:");
    scanf("%c",&ch);

  if(ch>='a' && ch<='z')
    printf("%c",ch);
  else if(ch>='A' && ch<='Z')
    printf("%c",ch+32);
 else
    printf("invalid");

    }







return 0;
}

