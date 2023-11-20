#include<stdio.h>
int main()
{
    int n,t,rem,s;
    scanf("%d",&n);
    t=n;
    n=n*n;
    for(s=0;n!=0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
    }
    if(s==t)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}