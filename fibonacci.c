#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,f;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    { 
      f=a+b; 
      printf("%d ",f);
      a=b;
      b=f;
    }
}