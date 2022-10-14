#include <stdio.h>

int main()
{
    int n,d,s=0,n1;
    printf("enter a number\n");
    scanf("%d",&n);
    n1=n;
    if(n>0)
    {
    while(n!=0)
    {
        d=n%10;
        s=((s*10)+d);
        n=n/10;
    }
    if(s==n1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    }
    else
    {
        printf("False\n");
    }
     return 0;
}
