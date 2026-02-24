#include <stdio.h>
int main()
{
    int numb[]= {12,23,34,45};
    int i;
    int length = sizeof(numb)/sizeof(numb[i]);
    for(i=0;i<4;i++)
    {
        printf("%d \n", numb[i]);
    }
    return 0;
}
