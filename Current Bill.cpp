#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the unit of current :");
	scanf("%d",&a);
	if(a<100)
		printf("No current bill");
	else if(a>=100 && a<300)
	{
		b=2*a;
		printf("The current bill is :%d",b);
	}
	else if(a>=300 && a<700)
	{
		c=6*a;
		printf("The current bill is %d",c);
	}
		
	else
		printf("No current bill");
return 0;
}
