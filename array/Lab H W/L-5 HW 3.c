#include<stdio.h>

int main ()
{

    float money;

    printf("Enter your salary range($):");
    scanf("%f",&money);

    if (money>=0.00 && money<=14999.99)
    {
        printf("Base Tax($):0.00\n");
        printf("percentage of Excess:16\n");
    }
    else if (money>=15000.00 && money<=29999.99)
    {
        printf("Base Tax($):2250.0\n");
       printf("percentage of Excess:18\n");
    }
    else if (money>=30000.00 && money<=49999.99)
    {
        printf("Base Tax($):5,400.00\n");
        printf("percentage of Excess:22\n");
    }
     else if (money>=50000.00 && money<=79999.99)
    {
        printf("Base Tax($):11,000.00\n");
        printf("percentage of Excess:27\n");
    }
    else if (money>=80000.00 && money<=150000.99)
    {
        printf("Base Tax($):21,600.00\n");
       printf("percentage of Excess:33\n");
    }
    else
    printf("Invalid salary range");
    /* float money;
      printf("Enter a money:");
      scanf("%f",&money);

     if(money>=0.00 && money<=14999.99){
        printf ("Base Tax : 000");
         printf("Percentage : 16");
     }
     else if(money>=15000 && money<=29999.99){
         printf ("Base Tax : 2250");
         printf("Percentage : 18");
     }
     else if(money>=30000 && money<=49999.99){
         printf ("Base Tax :4500 ");
         printf("Percentage :22");
     }
     else if(money>=0.00 && money<=14999.99){
         printf ("Base Tax : ");
         printf("Percentage : ");
     }
     else if(money>=0.00 && money<=14999.99){
        printf ("Base Tax :21600 ");
         printf("Percentage :33 ");
     }

     else
     printf("Fuck");*/



    return 0;
}
