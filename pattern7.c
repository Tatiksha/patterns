#include<stdio.h>
int main()
{
    int i,j,n,k,m;
    n=5; m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=m;k++)
        {
            printf("*");
        } m--;
        printf("\n");
    }
    return 0;
}
