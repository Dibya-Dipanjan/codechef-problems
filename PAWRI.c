#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char s[100000];
        scanf("%s",s);
        for(int i=0;s[i+4]!=NULL;i++)
        {
            if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y')
            {
                s[i+2]='w';
                s[i+3]='r';
                s[i+4]='i';
            }
        }
        printf("%s\n",s);
    }
}

