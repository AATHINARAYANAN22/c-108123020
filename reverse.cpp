#include <stdio.h>
int main ()
{
	int i,j,s,n,q;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array :");
	for(s=0;s<n;s++)
	scanf("%d",&a[s]);
	for(i=0;i<(n+1)/2;i++)
	{
		j=a[i];
		a[i]=a[n-1-i];
		a[n-i-1]=j;
	}
	printf("Output array :");
	for(q=0;q<n;q++)
	printf("%d ",a[q]);
	return 0;
}
