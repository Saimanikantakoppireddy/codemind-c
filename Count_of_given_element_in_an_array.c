#include<stdio.h>
int main()
{
    int a[100],n,i,se;
    scanf("%d",&n);
    int c=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
       { 
           c++;
        }
    }
    printf("%d",c);
    
}