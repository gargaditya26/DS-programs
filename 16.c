#include<stdio.h>
void main()
{
    int m,n,p,q,i,j,k;
    printf("Enter value of m,n,p,q:\n");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int a[m][n], b[p][q];
    printf("Enter first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][n];
    if(m==p && n==q)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j] + b[i][j];
            }
        }
        printf("Addition of matrices:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("\n%d",c[i][j]);
            }
        }
    }
    else
        printf("Addition not possible");
}
