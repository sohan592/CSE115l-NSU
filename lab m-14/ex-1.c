#include<stdio.h>
int main()
{
    int i,num,flag=0;
    printf("Enter the array size:");
    scanf("%d",&num);
    int a[num];
    printf("Enter the elements of arrray:");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    int num1;
    printf("\nEnter number to be searched:");
    scanf("%d",&num1);

    for(i=0;i<num;i++)
    {
        if(a[i]==num1){
            flag=1;
            break;
        }
    }
        if(flag==1){
        for(i=0;i<num;i++){
        if(i==0 || i==num-1)
            printf("%d ",num1);
        else
            printf("%d ",a[i]);

    }
    }
    else
      printf("Not found");
return 0;
}
