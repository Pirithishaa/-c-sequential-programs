#include <stdio.h>
int main()
{
    int a=1234,b=10,c,d,e,f,g,h;
    c=a%b;
    d=a/b;
    e=d%b;
    f=d/b;
    g=f%b;
    h=f/b;
    printf("%d,%d,%d,%d",h,g,e,c);
}
