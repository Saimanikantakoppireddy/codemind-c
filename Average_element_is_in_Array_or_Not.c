#include<stdio.h>
int main()
{
    int a[100],n,i,tot=0,avg,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tot=tot+a[i];
    }
    avg=(tot)/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            f=1;
            break;
        }
    }
    if(f)
    printf("True");
    else
    printf("False");
    
}