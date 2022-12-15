#include<stdio.h>
int main()
{
    int i,n,q,rev,s=0;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        rev= n%10;
        s=s*10+rev;
        n=n/10;
    }
    if(q == s)
    printf("True");
    else
    printf("False");
}
