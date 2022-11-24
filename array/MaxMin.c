#include<stdio.h>
main()
{
    int a[10] = {34,23,50,65,12,83,46,95,27,72};
    int i,Max,Min;
    Max=Min=a[0];

    for(i=1;i<10;i++)
    {
        if(a[i]>Max)
            Max = a[i];
        if(a[i]<Min)
            Min = a[i];
    }

    printf("Max = %d, Min = %d",Max,Min);

}
