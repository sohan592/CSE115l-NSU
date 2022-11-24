//2.Write a program to display all the letters of the alphabet (a-z). Use two for loops: the 1st one will print all letters in small letters and the 2nd one will print them in capital letters.

#include<stdio.h>

int main (){
//char i;
int i;
//for (i='a';i<='z';i++){
for(i=1;i<=26;i++){
  printf("%c ",'a'+i-1);//96+i
  }

 //   printf("%c ",i);


printf("\n");
for (i='A';i<='Z';i++){

        if(i=='A' || i=='B'|| i=='C'|| i=='D' || i=='Z')
        printf("%c ",i);
       else
        printf(".");
}




return 0;
}
