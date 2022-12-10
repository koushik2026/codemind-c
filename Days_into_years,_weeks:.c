#include<stdio.h>
int main()
{
    int y, w,n;
    scanf("%d",&n);
    y=n/365;
    w=(n%365)/7;
    printf("%d
%d",y,w);
}