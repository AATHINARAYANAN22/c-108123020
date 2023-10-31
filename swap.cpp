#include <stdio.h>
int main ()
{
	int i,j,n,s,q;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array :");
	for(s=0;s<n;s++)
	scanf("%d",&a[s]);
	for(i=0;i<n;i=i+2)
	{
		j=a[i+1];
		a[i+1]=a[i];
		a[i]=j;
	}
	printf("Out put array :");
	for(q=0;q<n;q++)
	printf("%d ",a[q]);
	return 0;
}
