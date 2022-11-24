#include<stdio.h>
int main()
{
    FILE *fp;
    int i,data,size;
    fp = fopen("E:\\CSE115_19\\Data\\data.txt","w");
    if(fp==NULL)
         {
             printf("File can not be opened.");
             return -1;
         }
    for(i=1;i<=10;i++)
        fprintf(fp,"%d\n",i+100000);
    fclose(fp);

     fp = fopen("E:\\CSE115_19\\Data\\data.txt","r");

     for(i=1;i<=10;i++)
        {
            fscanf(fp,"%d\n",&data);
            printf("%d\n",data);
        }
      fclose(fp);

      fp = fopen("E:\\CSE115_19\\Data\\data.txt","a+");
       for(i=11;i<=15;i++)
        fprintf(fp,"%d\n",i+100000);

       fseek(fp,0,SEEK_SET);

       printf("\nAfter appending....\n");

       /*for(i=1;i<=15;i++)
        {
            fscanf(fp,"%d\n",&data);
            printf("%d\n",data);
        }
*/

      while (1) {
            fscanf(fp,"%d",&data);
            if(feof(fp))break;
            printf("%d\n",data);
        }
      fseek(fp,0,SEEK_END);
      size = ftell(fp);
      printf("File size: %d bytes",size);

      fclose(fp);
      return 0;
}
