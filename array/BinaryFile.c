#include<stdio.h>
main()
{
    FILE *fp;
    int i,data,size,n=4;
    int a[5] = {100,123,568,51,45};
    int b[5];

    fp = fopen("E:\\CSE115_19\\Data\\BinaryData.dat","wb+");
    if(fp==NULL)
       printf("File can not be opened.");

   /* for(i=100001;i<=100005;i++)
        fwrite(&i,sizeof(int),1,fp);*/
    fwrite(a,sizeof(int),5,fp);

    fseek(fp,0,SEEK_SET);

    fread(b,sizeof(int),5,fp);
    for(i=0;i<5;i++)
        printf("%d\n",b[i]);

    /*fread(&data,sizeof(int),1,fp);
    printf("%d\n",data);
    fread(&data,sizeof(int),1,fp);
    printf("%d\n",data);*/


     /* while (1) {
            fread(&data,sizeof(int),1,fp);
            if(feof(fp))break;
            printf("%d\n",data);
        }*/
      fseek(fp,0,SEEK_END);
      size = ftell(fp);
      printf("File size: %d bytes",size);
}
