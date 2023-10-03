#include<stdio.h>
int main ()
{
	int i,n,s;
	printf("Enter the no.of.rows :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		printf("  ");
		printf("* * * * * ");
	printf("\n");	
	}
	return 0;
}
