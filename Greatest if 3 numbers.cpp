#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
		printf(" %dis greatest",a);
	else if(b>c)
		printf(" %d isgreatest",b);
	else
		printf(" %d is greatest ",c);
	return 0;
}
