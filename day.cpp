#include<stdio.h>
int main()
{
	int y,m;
	printf("Enter the year amd month :");
	scanf("%d %d",&y,&m);
	if(y%4==0 && (y%400==0||y%100!=0))
		if (m==2)
		printf("29 Days");
		else if (m==1||m==3||m==5||m==7||m==9||m==11)
		printf("31 Days");
		else if (m==4||m==6||m==8||m==10||m==12)
		printf("30 Days");
		else
		printf("invalid");
	else
		if (m==2)
		printf("28 Days");
		else if (m==1||m==3||m==5||m==7||m==9||m==11)
		printf("31 Days");
		else if (m==4||m==6||m==8||m==10||m==12)
		printf("30 Days");
		else
		printf("invalid");
}
