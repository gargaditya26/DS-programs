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
    int c[m][q];
    if(n==p)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("Multiplication of matrices is:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("\n%d",c[i][j]);
            }
        }
    }
    else
    {
        printf("Multiplication not possible");
    }
}
