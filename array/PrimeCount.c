#include<stdio.h>

int is_prime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}


main()
{
    int a[10] = {34,23,50,65,12,83,46,97,27,72};
    int i,count=0;

    for(i=0;i<10;i++)
    {
       if(is_prime(a[i]))
            count++;
    }
   printf("Prime count: %d",count);
}
