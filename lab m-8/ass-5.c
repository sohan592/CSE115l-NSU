//5.	Write a C program that prints all even numbers between m and n (m,n are user inputs) except the ones which are divisible by 3. 

#include<stdio.h>

void main (){
int i,m,n;
printf("Enter  two number:");
scanf("%d%d",&m,&n);
for (i=m;i<=n;i++){
    if (i%2==0 && i%3!=0)
       printf("%d, ",i);
}

}
//use continue statement

#include<stdio.h>

void main (){
int i,m,n;
printf("Enter  two number:");
scanf("%d%d",&m,&n);
for (i=m;i<=n;i++){
 if (i%2==0){
   if (i%3==0)
        continue;
         printf("%d, ",i);

}

}
}
