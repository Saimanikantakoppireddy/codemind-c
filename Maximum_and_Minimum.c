#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            if(max<a[i])
            max=a[i];
            if(min>a[i])
            min=a[i];
            a[i]=0;
            f=1;
        }
    }
    if(f)
    printf("%d %d",min,max);
     else if(f==0)
    printf("-1");
}