#include <stdio.h>
int main()
{
    int n,i,j,k,l=1;
    n=5;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i+1; j++){
            printf(" ");
        }
        for(k=1; k<i+1; k++){
            printf("%d ",l);
            l++;
        }
        printf("\n");
    }
    return 0;
}
