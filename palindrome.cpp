#include<stdio.h>
int main()
{
	int n,x,r=0;
	printf("Enter the number :");
	scanf("%d",&n);
	x=n;
	for( ;n>0;n=n/10)
	{
		r=r*10+n%10;
	}
	if(r==x)
	printf("The number is palindrome");
	else
	printf("The number is not palindrome");
	return 0;
}
