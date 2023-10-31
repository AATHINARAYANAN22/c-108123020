#include <stdio.h>
int main ()
{
	int n,i,j,t=0,s,k;
	printf("Enter the value of n and k :");
	scanf("%d %d",&n,&k);
	int a[n];
	printf("Enter the array :");
	for(s=0;s<n;s++)
	scanf("%d",&a[s]);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		t=t+1;
	}
	printf("%d",t);
	return 0;
}
