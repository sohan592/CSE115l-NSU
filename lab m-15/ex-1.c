#include<stdio.h>
#include<string.h>
int main (){

int i,count=0;
char str[100];
printf("Enter a string:");
gets(str);
for(i=0;str[i]!=NULL;i++){
    if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       count++;
}

printf("Vowels count=%d\n",count);


return 0;
}
