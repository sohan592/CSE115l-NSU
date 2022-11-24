#include<stdio.h>
main()
{
    //int a[10] = {34,23,50,65,12,83,46,95,27,72};
    int a[5];
    int i,num,flag=0;
    printf("Enter numbers:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("\nEnter number to be searched:");
    scanf("%d",&num);

    for(i=0;i<5;i++)
    {
        if(num == a[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("Found");
    else
         printf("Not Found");
}
