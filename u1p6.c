#include<stdio.h>
int main()
{
    int n,i;
    int a[100];
    printf("enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("reverse order: \n");
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
