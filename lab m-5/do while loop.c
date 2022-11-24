
 #include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    sum += a;
    while(a != 100)
    {
       printf("Enter a number: ");
        scanf("%d",&a);
	    sum += a;
    }
    printf("%d",sum);
    return 0;
}

/*int main()
{
    int a=100, sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&a);
	    sum += a;
    }
    while(a != 100);

    printf("%d",sum);
    return 0;
}*/


