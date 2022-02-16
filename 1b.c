#include <stdio.h>
int main(void)
{
    long int n, count=0;
    scanf("%ld",&n);
    if (1<=n && n<=100)
    {
        long  int i=1, j, k;
        
        while (count<n)
        {
            for (j=1;j<=200;j++)
            {
                for (k=1;k<=200;k++)
                {
                    if (j!=k && i!=j && i!=k)
                    {
                        if ( (j*j + i*i) == k*k )
                        {
                            if (j<k && i<j && count<n)
                            {
                            printf("%ld %ld %ld\n",i, j, k);
                            count++;
                            } 
                        }
                    }
                }
            }
            i++;
        } 
    }
    else
    {
       
    }
    
}
