#include<stdio.h>
void main()
{
    int m,n,i,j,k=0,l=0,x,p=0,count;
    printf("Enter value of m and n:");
    scanf("%d%d",&m,&n);
    int a[m],b[n],c[m],d[n];
    printf("\nEnter first set:");
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("\nEnter second set:");
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++) {
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==b[j])
                count=1;}
        if(count==0) {
            c[k]=a[i];
            k++; }}
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<m;j++) {
            if(b[i]==a[j]) {
                count=1; }}
        if(count==0){
            d[l]=b[i];
            l++;}}
    x=k+l;
    int e[x];
    for(i=0;i<k;i++){
        e[p]=c[i];
        p++;}
    for(i=0;i<l;i++){
        int count=0;
        for(j=0;j<k;j++) {
            if(d[i]==e[j]){
                count=1;} }
        if(count==0) {
            e[p]=d[i];
            p++; }}
    printf("\nSymmetric Difference:");
    for(i=0;i<x;i++)
        printf("\n%d",e[i]);
}
