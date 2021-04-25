#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int w1,w2,x1,x2,m;
        scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m );
        int t = w2-w1;
        if("m*x1<= t <= m*x2")
        {
            printf("1\n");
        }else
        {
            printf("0\n");
        }
    }
    return 0;
}
