#include<stdio.h>
void main()
{
    int m,n,i,j,temp;
    printf("Enter value of m,n:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter matrix:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i!=j && i<j){
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp; }  }  }
    printf("Transpose of the matrix is:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        printf("\n%d",a[i][j]);}}
