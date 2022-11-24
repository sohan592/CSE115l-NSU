#include<stdio.h>
#include<string.h>
main()
{
    char name[5][20] = {"Nowrin Ahmed","Mahbuba Sharmin","Jukta Bhowmik","Shamin Fuad","Atique Shahriar"};


    int i,j,n=5;
    char temp[20];

     for(i=0;i<n;i++)
       printf("%s\n",name[i]);



    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
              if(strcmp(name[i],name[j])>0)
              {
                 strcpy(temp,name[i]);      //temp = name[i];
                 strcpy(name[i],name[j]);   //name[i] = name[j];
                 strcpy(name[j],temp);      //name[j] = temp;
              }


    printf("\nAfter sorting.....\n\n",name);

     for(i=0;i<n;i++)
       printf("%s\n",name[i]);

}
