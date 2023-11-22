#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,f=a+b;
    scanf("%d",&n);
    while(f<n)
    {
        f=a+b;
        a=b;
        b=f;
    }
    if(f==n)
    printf("True");
    else
    printf("False");
    
}