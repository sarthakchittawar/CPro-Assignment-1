#include <stdio.h>
int main(void)
{
    long int N;
    if (scanf("%ld", &N) !=1)
    {

    }
    else{
    if (1<=N && N<=100000)
    {
        long int f=1, ar[2][N], x;
        
        while (f<=2)
        {   
            for (int i=0; i<N; i++)
            {
                if (scanf("%ld",&x)!=1)
                {

                }
                else{
                if (-100000<=x && x<=100000)
                {
                    ar[f-1][i] = x;
                }}
            }
            f++;
            if (f==1)
            {printf("\n");}
        }

        long int ans=0;
        for (int i=0; i<N; i++)
        {
            ans+=(ar[0][i]*ar[1][i]);   
        }

        printf("%ld\n",ans);
    }}
}
