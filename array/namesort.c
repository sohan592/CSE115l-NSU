#include<stdio.h>
#include<string.h>
main()
{
    char name[20] = {"nowrin ahmed"};
    int i,j,n;
    char temp;

     printf("%s\n",name);

     n = strlen(name);

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
              if(name[i]>name[j])
              {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
              }


    printf("%s\n",name);

}
