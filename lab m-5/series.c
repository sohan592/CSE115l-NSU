
#include <stdio.h>
int main()
{
    int i,number;
    double term,sum=0;
    scanf("%d", &number);
    for (i=1;i<=number;i++){
        term=1.0/i;
        sum=sum+term;

    }
    printf("%lf\n",sum);
    return 0;
}
