#include<stdio.h>
int main()
{
    int n,l,rem;
    scanf("%d",&n);
    rem=n%10;
    while(n>9)
    {
     n=n/10;
     l=n;
    }
    printf("%d",l+rem);
}