#include<stdio.h>
int main()
{
    int u;
    float c,b;
    scanf("%d",&u);
    if(u<=199)
    c=u*1.20;
    else if(u<400)
    c=u*1.50;
    else if(u<600)
    c=u*1.80;
    else if(u>600)
    c=u*2.00;
    if(c>400)
    {b=c+(0.15*c);
    printf("%.2f",b);
    }
    else
 if(c<400)
 {b=c+100;
 printf("%.2f",b);
 }
}