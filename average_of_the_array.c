#include<stdio.h>
int main()
{
    long long int i,n;

    double avg,s=0;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
       avg=s/n;
    }
    //avg=s/n; 
    printf("%0.2f",avg);
}