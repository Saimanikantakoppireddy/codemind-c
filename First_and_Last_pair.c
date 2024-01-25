#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=n-1;
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            printf("%d %d ",a[i],a[j]);
            j--;
        }
    }
        else
        {
            for(i=0;i<(n/2)+1;i++)
            {
                if(i==j)
                printf("%d 0",a[i]);
                else
                printf("%d %d ",a[i],a[j]);
                j--;
            }
        }
    }