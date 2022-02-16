#include <stdio.h>
int main(void)
{
    int ar[3], a, b, c, f=0;
    
    scanf("%d %d %d",&ar[0], &ar[1], &ar[2]);
    for(int i=0; i<3; i++)
    {
        if ((1 <= ar[i]) && (ar[i] <= 10000))
        {
            f++;
        }
    } 
    if (f==3)
    {
        a=ar[0];
        b=ar[1];
        c=ar[2];
        if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("ERROR\n");
    }
    
}
