#include <stdio.h>
int main(void)
/*
{
    int n, p;
    int a=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    
    begin:
    
    p=a*n;
    printf("%d x %d = %d\n", n, a, p);
    a=a+1;
    if (a<=10)
    {
        goto begin;
    }
    
    
    //Using WhileLoop
    while (a<=10)
    {
        p=a*n;
        printf("%d x %d = %d\n", n, a, p);
        a=a+1;
    }
    
}
*/
//Challenge Problem:
{
    int n, m, p, x, y;
    int a=1;

    if (scanf("%d %d", &x, &y) !=2)
    {
        
    }
    else
    {
        if (1<=x && x<=1000 && 1<=y && y<=1000)
        {
            n=x;
            m=y;
            while (a<=m)
            {
                p=a*n;
                printf("%d\n", p);
                a=a+1;
            }
        }
    }


}
