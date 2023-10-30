#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a<=10 && b<=10 && a+b>10)
    {
        c=21-(a+b);
        printf("%d",c);
        
    }else
    printf("-1");
}