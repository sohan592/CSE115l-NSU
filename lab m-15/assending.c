#include<stdio.h>
#include<string.h>
int main (){
char ch[100],chtemp;
gets(ch);
int len=strlen(ch);
for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(ch[j]>=65 && ch[j]<=90){
                if(ch[j+1]>=65 && ch[j+1]<=90){
                    if(ch[j]>ch[j+1]){
                        chtemp=ch[j];
                        ch[j]=ch[j+1];
                        ch[j+1]=chtemp;
                    }
                }
            }
     if(ch[j]>=97 &&  ch[j]<=122)
            {
                if(ch[j+1]>=97 && ch[j+1]<=122)
                {
                    if(ch[j]>ch[j+1])
                    {
                        chtemp = ch[j];
                        ch[j] = ch[j+1];
                        ch[j+1] = chtemp;
                    }
                }
            }
        }
    }
printf("%s",ch);
return 0;
}
