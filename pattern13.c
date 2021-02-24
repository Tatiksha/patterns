#include <stdio.h>

int main()
{
    int i,j,k,n,c,temp,num;
    n=5;
    c=1;
    temp=1+(n-1)*2;
    for(i=1; i<=n; i++){
       num=1;
    for(j=1; j<=c; j++)
       {
           printf(" ");
       }
    for(k=temp; k>=1; k--){
        printf("%d", num);
        num++;
       }
       counter++;
        temp=temp-2;
        printf("\n");
       }
        return 0;
    }
