#include<stdio.h>
int main()
{
    int n,i;
    int a[100],b[100];

    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter elements of first array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //copying elements
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    printf("elements of second array:\n");
    for(i=0;i<n;i++)
    {
    printf("%d\n",b[i]);
    }
    return 0;
}
