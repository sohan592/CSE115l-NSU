
#include<stdio.h>
int main()
{
    int burger,pizza,fries,water;

    printf("\t\t\t\t ===LIST OF PRODUCTS===\n");
    printf("\t\t\t\t________________________\n");
    printf("\t\t\t\t|Product   |      Price|\n");
    printf("\t\t\t\t|______________________|\n");
    printf("\t\t\t\t|Burger    |      180tk|\n");
    printf("\t\t\t\t|----------------------|\n");
    printf("\t\t\t\t|Pizza     |      650tk|\n");
    printf("\t\t\t\t|----------------------|\n");
    printf("\t\t\t\t|Fries     |       60tk|\n");
    printf("\t\t\t\t|----------------------|\n");
    printf("\t\t\t\t|Water     |       15tk|\n");
    printf("\t\t\t\t------------------------\n");




    printf("====Order===\n");

    printf("Burger: ");
    scanf("%d",&burger);

    printf("Pizza: ");
    scanf("%d",&pizza);

    printf("Fries: ");
    scanf("%d",&fries);

    printf("Water: ");
    scanf("%d",&water);


    double bur,piz,fri,wat,sum;
    double vat,total;
    bur=burger*180;
    piz=pizza*650;
    fri=fries*60;
    wat=water*15;

    sum=bur+piz+fri+wat;
    vat=sum*0.15;
    total=sum+vat;




    printf("\t         ===Receipt===\n");
    printf("\t___________________________________\n");
    printf("\t|Product   | Quantity |    Price  |\n");
    printf("\t|---------------------------------|\n");
    printf("\t|Burger    |   %d     |    %6.2lftk|\n",burger,bur);
    printf("\t|---------------------------------|\n");
    printf("\t|Pizza     |   %d     |    %6.2lftk|\n",pizza,piz);
    printf("\t|---------------------------------|\n");
    printf("\t|Fries     |   %d     |    %.2lftk|\n",fries,fri);
    printf("\t|---------------------------------|\n");
    printf("\t|Water     |   %d     |     %.2lftk|\n",water,wat);
    printf("\t|---------------------------------|\n");
    printf("\t|Vat       |              %6.2lftk|\n",vat);
    printf("\t|---------------------------------|\n");
    printf("\t|Total     |             %6.2lftk|\n",total);
    printf("\t----------------------------------\n");

    return 0;
}

