#include<stdio.h>
int main()
{
    int n,i,c=0,ev=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c++;
            if(i%2==0)
            {
                ev++;
            }
        }
    }
    if(c==ev)
    printf("True");
    else
    printf("False");
}