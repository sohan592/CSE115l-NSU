double average(int a[],int n)
{
    double avg=0;
    int i;

    for(i=0;i<n;i++)
        avg += a[i];

    avg = avg/n;

    return avg;

}

void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
           if(a[i]>a[j])
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }

}
