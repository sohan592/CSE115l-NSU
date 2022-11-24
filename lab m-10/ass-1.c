#include<stdio.h>
int main()
{
  int i,j,k;
  printf("Enter a number:");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
    for(j=1;j<=k;j++)
    {
        if (i==1 || i==j-1 || i==j){  //i+j==k-1 || i+j==k+1
      printf("*");
    }
    else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}

//reverse
#include<stdio.h>
int main()
{
  int i,j,k;
  printf("Enter a number:");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
    for(j=1;j<=k;j++)
    {
        if (i==1 || i==k-j || i+j==k+1){
      printf("*");
    }
    else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
