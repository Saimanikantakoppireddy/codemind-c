#include<stdio.h>
//int add(int ,int );
  int add(int a,int b)
  {
      int n=a+b;
      return n;
  }
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=add(a,b);
    printf("%d",res);
}