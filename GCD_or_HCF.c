#include<stdio.h>
int main()
{
    int a,b,m,i;
    scanf("%d%d",&a,&b);
    for(i=1;a<=b;i++)
    {
        m=(a*i);
        if(m%b==0)
        break;
    }
    printf("%d",(a*b)/m);
}