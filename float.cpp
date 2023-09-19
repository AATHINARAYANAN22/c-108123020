#include<stdio.h>
int main ()
{
	float a,b,c;
	int d;
	printf("Enter the value :");
	scanf("%f %f",&a,&b);
	c=a*b;
	d=a*b;
	printf("The exact value is %f",c);
	printf("The approx value is %d",d);
	return 0;
}
