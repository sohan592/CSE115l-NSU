//2.Write a C program to compute and print the sum of all prime numbers between m and n (m, n are inputs)


 #include<stdio.h>

 int main (){
 int i,j,n,m,isprime=1,sum=0;
 printf("Enter two number:");
 scanf("%d%d",&m,&n);
 printf("All prime numbers between %d and %d:",1,n);
 for (i=m;i<=n;i++){
        isprime=1;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            isprime=0;
           break;
        }
    }
    if(isprime==1){
        printf("%d, ",i);
        sum+=i;
    }
 }
printf("\nsum=%d",sum);
return 0;
}
