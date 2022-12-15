#include<stdio.h>
#include<math.h>
int main()
{ float area,a,b,c,s;
scanf("%f%f%f",&a,&b,&c);;
s=(a+b+c)*0.5;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%0.2f",area);
}