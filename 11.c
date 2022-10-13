#include<stdio.h>
void main()
{
    int i,j,k=0,count=0,m,n;
    printf("Enter value of m and n:");
	scanf("%d%d",&m,&n);
	int a[m],b[n],c[m];
	printf("\nEnter first set:");
	for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter second set:");
	for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count=1;
            }
        }
        if(count==0)
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("\nDifference:");
    for(i=0;i<k;i++)
    {
        printf("\n%d",c[i]);
    }
}
