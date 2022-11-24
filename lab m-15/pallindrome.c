#include <stdio.h>
#include<string.h>
int main (){
char ch[100];
printf("Enter a string:");
gets(ch);
int len,flag=1;
len=strlen(ch);
for(int i=0;i<len;i++){
    if(ch[i]!=ch[len-i-1]){
        flag=0;
        break;
    }
}
if(flag==1){
    printf("\n%s is a palindrome string",ch);
}
else
{
    printf("\n%s is not a palindrome string",ch);
}
return 0;
}


#include<stdio.h>
#include<string.h>
int main (){
int flag;
char str[100],revstr[100];
printf("Enter the string:");
gets(str);
strcpy(revstr,str);
strrev(revstr);
flag=strcmp(str,revstr);
if(flag==0){
    printf("%s is a palindrome string",str);
}
else
{
    printf("%s is Not palindrome string",str);
}
 return 0;
}
