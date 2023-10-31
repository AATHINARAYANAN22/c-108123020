#include <stdio.h>
int main ()
{
	int n,i,j,t,s,k;
	printf("Enter the value of n and k :");
	scanf("%d %d",&n,&k);
	int b[n];
	printf("Enter the array :");
	for(s=0;s<n;s++)
	scanf("%d",&b[s]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j+1];
				b[j+1]=b[j];
				b[j]=t;
			}
		}
	}
	printf("kth largest %d ",b[n-k]);
	printf("kth smallest %d ",b[k-1]);
	return 0;
}
