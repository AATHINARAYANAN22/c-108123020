#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter the princple and Rate of interset and Time :");
	scanf("%f %f %f",&a,&b,&c);
	d=(a*b*c)/100;
	printf("The simple interest is : %f",d);
	return 0;
}
