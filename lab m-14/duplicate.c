#include <stdio.h>
int main (){
int num,i,j,k;
printf("Enter array size:");
scanf("%d",&num);
int array[num];
printf("Enter array elememts:");
for( i=0;i<num;i++){
    scanf("%d",&array[i]);
}
printf("Print the array elements after duplicating:");
for( i=0;i<num;i++){
    printf("%d ",array[i]);
}
for(i=0;i<num;i++)
{
    for(j=i+1;j<num;j++)
        {
        if(array[i]==array[j])
        {
            for(k=j;k<num-1;k++)
            {
                array[k]=array[k+1];
            }
            num--;
         // j--;
       }
    }
}

printf("\nPrint the array elements before duplicating:");
for(i=0;i<num;i++){
    printf("%d ",array[i]);
}
return 0;
}
