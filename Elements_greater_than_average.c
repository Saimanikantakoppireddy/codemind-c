#include<stdio.h>
int main()
{
    int n,i,avg,tot=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tot=tot+a[i];
    }
    avg=tot/n;
   for(i=0;i<n;i++)
   {
       if(a[i]>=avg)
       c++;  
   }
   printf("%d",c);
}