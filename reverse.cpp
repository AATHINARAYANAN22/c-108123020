#include<stdio.h>
int main()
{
	int n,r=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for( ;n>0;n=n/10)
	{
		r=r*10+n%10;
	}
	printf("The reverse of number is : %d",r);
	return 0;
}
