#include<stdio.h>
int main()
{
    int i,l,n;
    scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",l,i,l*i);
        }
    }
}