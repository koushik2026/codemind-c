#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,r1,r2,s1=0,s2=0,sqr;
    scanf("%d",&n);
    t=n*n;
    while(t!=0)
    {
        r1=t%10;
        t/=10;
        s1=s1*10+r1;
    }
    sqr=sqrt(s1);
    while(sqr!=0)
    {
        r2=sqr%10;
        sqr/=10;
        s2=s2*10+r2;
    }
    if(s2==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}