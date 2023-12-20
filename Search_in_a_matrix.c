#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s,f=0;
    scanf("%d",&s);
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s==a[i][j])
            {
                f=1;
                break;
            }
        }
    }
    if(f)
    printf("1");
    else
    printf("0");
}