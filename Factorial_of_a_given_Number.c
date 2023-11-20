#include<stdio.h>
int main()
{
    int n,f;
    scanf("%d",&n);
    for(f=1;n!=0;n--)
    {
        f=f*n;
    }
    printf("%d",f);
}