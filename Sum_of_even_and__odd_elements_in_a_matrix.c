#include<stdio.h>
int main()
{
    int r,c,i,j,ev=0,odd=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            ev+=a[i][j];
            else
            odd+=a[i][j];
        }
    }
    printf("%d %d",ev,odd);
}