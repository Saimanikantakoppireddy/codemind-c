#include<stdio.h>
int main()
{
    int n,i,tot;
    float avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    tot=tot+a[i];
    avg=(tot*1.0)/n;
    printf("%.2f",avg);
}