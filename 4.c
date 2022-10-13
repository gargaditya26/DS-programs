#include<stdio.h>
void main()
{
    int i,n,x;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number to be deleted:");
    scanf("%d",&x);
    printf("New array:");
    for(i=0;i<n;i++){
        if(a[i]==x)
            continue;
        else
            printf("\n%d",a[i]);
    }
}
