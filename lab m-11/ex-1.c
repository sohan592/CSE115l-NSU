//1.Write a C program to print all prime numbers between 1 and n in reverse order (n is an input


 #include<stdio.h>

 int main (){
 int i,j,n,isprime=1;
 printf("Enter a number:");
 scanf("%d",&n);
 printf("All prime numbers between %d and %d:",1,n);
 for (i=n;i>=2;i--){
        isprime=1;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            isprime=0;
           break;
        }
    }
    if(isprime==1)
        printf("%d, ",i);
 }

return 0;
}
