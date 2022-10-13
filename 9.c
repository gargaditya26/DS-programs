#include <stdio.h>
int main(void)
{
    int m,n,i,j,k=0,l;
    printf("Enter value of m and n:");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("\nEnter first set:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter second set:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    l=m+n;
    int c[l];
    for(i=0;i<m;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<m;j++)
        {
            if(b[i]==c[j])
            {
                count=1;
            }
        }
        if(count==0)
        {
            c[k]=b[i];
            k++;
        }
    }
    printf("\nUnion:");
    for(i=0;i<k;i++)
    {
        printf("\n%d",c[i]);
    }
}
