#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered array is:\n");
    for(i=0;i<n;i++)
    {
       printf("%d\n",a[i]);
    }
}
