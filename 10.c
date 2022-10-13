#include<stdio.h>
void main(){
    int m,n,l,i,j,k;
    printf("Enter size of first set:");
    scanf("%d",&m);
    int a[m];
    printf("Enter first set:");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("\nEnter size of second set:");
    scanf("%d",&n);
    int b[n];
    printf("Enter second set:");
    for(j=0;j<n;j++)
        scanf("%d",&b[j]);
    l=m+n;
    int c[l];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++; } } }
    printf("\nIntersection:");
    for(i=0;i<k;i++)
        printf("\n%d",c[i]);}
