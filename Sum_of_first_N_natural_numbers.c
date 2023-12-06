#include<stdio.h>
int sum(int n)
{
    int s=n*(n+1)/2;
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r=sum(n);
    printf("%d",r);
}