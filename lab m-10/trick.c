#include<stdio.h>

int main()
{
  int i,j,k;
  scanf("%d",&k);
  for(i=1;i<=k;i++){
     for (j=k;j>=1;j--){
            if(j<=i){
        printf("%d",j);
            }
            else
                printf(" ");
    }
    printf("\n");
  }
  return 0;

}