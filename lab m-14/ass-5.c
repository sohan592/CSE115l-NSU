//ass-5

#include<stdio.h>
#include<string.h>
int main (){
int i,count=0,count_1=0;
int number_space=0;
char ch[100];
gets(ch);
for(i=0;ch[i]!='\0';i++){
if (ch[i]>='A' && ch[i]<='Z'){
    count++;
}
else if(ch[i]>='a' && ch[i]<='z')
    count_1++;
 else if(ch[i]==' ')
        number_space++;
}
printf("%d\n",count);
printf("%d\n",count_1);
printf("%d",number_space);
return 0;
}
