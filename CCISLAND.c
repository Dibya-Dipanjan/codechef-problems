#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x,y,x_r,y_r,d;
        scanf("%d %d %d %d %d",&x,&y,&x_r,&y_r,&d);
        double a,b,result;
        a = x/x_r;
        b = y/y_r;
        if(a <= b)
        {
            result = a;
        }if(b<a)
        {
            result = b;
        }if(result >= d)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }

    return 0;

}
