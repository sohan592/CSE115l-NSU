#include<stdio.h>
#include<math.h>
int main ()
{

    int m,n;
    printf("Enter two integer numbers:\n");
    scanf("%d%d",&m,&n);

    printf("%d\n",m*pow(2,n));
    printf("%d left shift by %d=%d\n",m,n,m<<n);
    printf("%.2f\n",(float)m/pow(2,n));
    printf("%d right shift by %d=%d\n",m,n,m>>n);


return 0;

}

