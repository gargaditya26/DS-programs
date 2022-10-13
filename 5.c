#include<stdio.h>
void main()
{
    int i,n,x,flag=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            flag=1;
            continue;} }
    if(flag==0)
        printf("Number Missing");
    else
        printf("Number Found");}
