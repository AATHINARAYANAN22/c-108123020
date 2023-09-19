#include<stdio.h>
int main()
{
	float b,d,a,g;
	printf("Enter the Basic salary :");
	scanf("%f",&b);
	d=b*48/100;
	a=b*8/100;
	int h;
	printf("Enter the region :");
	scanf("%d",&h);
	if (h==1)
	{
	g=d+a+(h*27/100)+b;
	printf("%f",g);	
	}
	else if(h==2)
	{
	g=d+a+(b*24/100)+b;
	printf("%f",g);
	}
	else if(h==3)
	{
	g=d+a+(b*16/100)+b;
	printf("%f",g);
	}
	else
	{
	g=d+a+(b*12/100)+b;
	printf("%f",g);
	}
	return 0;
	
}
