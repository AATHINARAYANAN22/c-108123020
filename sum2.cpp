#include<stdio.h>
int main()
{
	int n,x,m=0;
	printf("Enter the number :");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		m=m+x;
		n=n/10;
	}
	printf("The sum is : %d",m);
	return 0;
}
