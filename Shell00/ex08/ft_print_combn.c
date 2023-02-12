#include <stdio.h>

void doit(int n, int t, int b, char * s)
{
    s[t] = '0'+b;
    if (t == n-1)
    {
        printf("%s ",s);
    }
    else
    {
        int i = b + 1;
        while(i <= 9)
        {
            doit(n,t+1,i++,s);
        }
    }
}

void make(int n)
{
    char s[10] = {0};
    int i = 0;
    while(i < 10) doit(n,0,i++,s);
}

int main(int argc, const char * argv[])
{
    make(2);
}
