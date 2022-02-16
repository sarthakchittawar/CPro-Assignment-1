#include <stdio.h>
int main(void)
{
    long int x, y;
    
    if (scanf("%ld",&x)==1 && scanf("%ld",&y)==1 && 1<=x && 1<=y && x<=10000000000000000 && y<=10000000000000000)
    {
        long int a,b,n,f=0;
        a=x;
        b=y;
        long int i=2;
        if (a<b)
        {
            n=a;
        }
        else
        {
            n=b;
        }

        while (i<=n)
        {
            if (a%i==0 && b%i==0)
            {
                printf("NO\n");
                f=1;
                break;
            }
            i=i+1;
        }
        if (f==0)
        {
            printf("YES\n");
        }
    }
    else
    {
        printf("ERROR\n");
    }
    
}
