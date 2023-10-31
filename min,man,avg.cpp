#include <stdio.h>
int main ()
{
	int n,a[n],i,l,s,c=0;
	printf("Enter the value of n :");
	scanf("%d",&n);
	float b=0;
	printf("Enter the array :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
		s=a[i];
		if(a[i]>l)
		l=a[i];
		b=b+a[i];
	}
	printf("%d %d %f ",l,s,b/n);
}
