#include<stdio.h>
void main()
{
    int m,n,i,j;
    printf("Enter value of m,n:\n");
    scanf("%d%d",&m,&n);
    int a[m][n], b[n][m];
    printf("Enter matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            b[i][j]=a[j][i];
    }
    printf("Transpose of the matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("\n%d",b[i][j]);
    }
}
