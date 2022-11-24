2. (10 Points)  Write a program in C to read a file and remove the spaces between two words of its content.

Expected Output:

The content of the file is:                                           
The quick brown fox jumps over the lazy dog                            
After removing the spaces the content is:                             
Thequickbrownfoxjumpsoverthelazydog


#include <stdio.h>
int main (){
char ch[100];
int count=0;
printf("Enter the string:");
gets(ch);
for(int i=0;ch[i]!='\0';i++){
    if(ch[i]!=' '){
            printf("%c",ch[i]);
    }
}

return 0;
}
