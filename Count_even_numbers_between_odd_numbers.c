#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    int j=2,c=0;
    while(i<j)
    {
        if(j==n)
        break;
        if(a[i]%2!=0 && a[j]%2!=0)
        {
            if(a[i+1]%2==0)
            c++;
        }
        i++;
        j++;
    }
    printf("%d",c);

}