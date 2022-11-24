#include <stdio.h>
int main (){
char ch[100];
printf("Enter the string:");
gets(ch);
int len=strlen(ch);
for(int i=0;i<len;i++){
        char chtemp;
    for(int j=i+1;j<len;j++){
        if(ch[i]>ch[j]){
        chtemp=ch[i];
        ch[i]=ch[j];
        ch[j]=chtemp;
    }
    }
  // printf("%c ,",ch[i]);
}

printf("%s",ch);
return 0;
}
