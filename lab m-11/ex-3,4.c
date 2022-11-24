
 #include<stdio.h>

 int main (){
 int i=1,j,m,sum=0,count=0,sum1;
 printf("Enter a number:");
 scanf("%d",&m);
 while(count<m){
        sum=0;
    for(j=1;j<i;j++){
        if(i%j==0){
            sum+=j;
        }
    }
    if(sum==i){
        printf("%d ",i);
        count++;
        sum1+=i;
    }
  i++;
 }
printf("\nsum=%d",sum1);
return 0;
}
