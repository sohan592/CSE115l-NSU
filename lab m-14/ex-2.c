#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the array size:");
    scanf("%d",&num);
    int a[num];
    printf("Enter the elements of arrray:");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEnter number to be searched:");
    scanf("%d",&num);
    int flag=0;
    for(i=0;i<num;i++)
    {
        if(a[i]==num)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1){
        printf("%d",num);
    }
    else
         printf("Not Found");
return 0;
}
