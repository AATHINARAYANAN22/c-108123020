#include<stdio.h>
int main ()
{
	float p,c,cs,m,b,t;
	printf("Enter the marks of 5 subjects :");
	scanf("%f %f %f %f %f %f",&p,&c,&cs,&m,&b,&t);
	t=(p+c+cs+m+b)/5;
	if (t>=90)
	printf(" Grade A and %f",t);
	else if (t>=80)
	printf(" Grade B and %f",t);
	else if (t>=70)
	printf(" Grade C and %f",t);
	else if (t>=60)
	printf(" Grade D and %f",t);
	else if (t>=40)
	printf(" Grade E and %f",t);
	else
	printf(" Grade F and %f",t);
	return 0;
}
