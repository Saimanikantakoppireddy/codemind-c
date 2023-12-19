#include<stdio.h>
int main()
{
    int a[100],n,i,ev=0,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        ev=ev+a[i];
        else
        odd=odd+a[i];
    }
    if(ev>odd)
    printf("%d",ev-odd);
    else
    printf("%d",odd-ev);
}