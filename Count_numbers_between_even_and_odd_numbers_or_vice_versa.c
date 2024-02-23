#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int i=0,j=2,c=0;
	while(i<j) {
		if(j==n) break;
		if( (arr[i]%2==0 && arr[j]%2!=0 )|| (arr[i]%2!=0 && arr[j]%2==0))
		{//the condition is checking two numbers in betwwen
			c+=1;//c++
		}
		i+=1;//i++
		j+=1;//j++
	}
	printf("%d",c);
}