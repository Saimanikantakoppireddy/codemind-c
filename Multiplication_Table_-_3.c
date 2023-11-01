#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    for(;a<=b;a++)
    {
        printf("%d x %d = %d
",n,a,n*a);
    }
}