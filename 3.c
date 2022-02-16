#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, x;
    scanf("%d",&x);
    
    if (x<=10000)
    {
        n=x;
        double s=0, a=1;
        while (a<=n)
        {
            double p=sqrt(a);
            s=s+p;
            a=a+1;
        }
    
        printf("%.8f\n",s);
    }
}
