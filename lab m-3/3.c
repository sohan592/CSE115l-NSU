#include <stdio.h>
int main()
{
    int amt,total;
    printf("Enter amount:");
    scanf("%d",&amt);
    total =amt/500;
    printf("\nTotal number of notes:\n");
    printf("\n500:%d\n",total);
    amt=amt-(total*500);
    total=amt/100;
    printf("\n100:%d\n",total);
    amt=amt-(total*100);
    total=amt/50;
    printf("\n50:%d\n",total);
    amt=amt-(total*50);
    total=amt/20;
    printf("\n20:%d\n",total);
    amt=amt-(total*20);
    total=amt/10;
    printf("\n10:%d\n",total);
    amt=amt-(total*10);
    total=amt/5;
    printf("\n5:%d\n",total);
    amt=amt-(total*5);
    total=amt/2;
    printf("\n2:%d\n",total);
    amt=amt-(total*2);
    total=amt/1;
          printf("\n1:%d",total);


    return 0;
}
