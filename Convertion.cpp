#include<stdio.h>
int main ()
{
	int a,b,c,d;
	printf("Enter th km :");
	scanf("%d",&a);
	b=a*1000;
	c=b*1000;
	d=c*1000;
	printf("The value in m : %d",b);
	printf("The value in cm : %d",c);
	printf("The value in mm : %d",d);
	return 0;
}
