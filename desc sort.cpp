#include <stdio.h>
int main ()
{
	int n,i,j,t,s,q;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int b[n];
	printf("Enter the array :");
	for(s=0;s<n;s++)
	scanf("%d",&b[s]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j+1];
				b[j+1]=b[j];
				b[j]=t;
			}
		}
	}
	printf("Sorted array :");
	for(q=0;q<n;q++)
	printf("%d ",b[q]);
}
