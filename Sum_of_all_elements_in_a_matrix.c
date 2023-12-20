#include<stdio.h>
int main()
{
    int r,w,tot=0,i,j;
    scanf("%d%d",&r,&w);
    int a[r][w];
    for(i=0;i<r;i++)
    {
        for(j=0;j<w;j++)
       { scanf("%d",&a[i][j]);
        tot=tot+a[i][j];
       }
    }
    printf("%d",tot);
}
