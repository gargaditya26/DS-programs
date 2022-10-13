#include<stdio.h>
void main()
{
    int m,n,i=0,j=0,k=0;
    int a[5]={1,3,5,7,10};
    int b[4]={2,3,5,9};
    m=sizeof(a)/sizeof(a[0]);
    n=sizeof(b)/sizeof(b[0]);
    int c[m+n];
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(j<n)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    while(i<m)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    printf("Sorted array:\n");
    for(i=0;i<(m+n);i++)
    {
        printf("%d\t",c[i]);
    }
    printf("\n");
}
