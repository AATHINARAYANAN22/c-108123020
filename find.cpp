#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the n :");
	scanf("%d",&n);
	char a[n],t;
	printf("Enter the string :");
	scanf("%s",a);
	fflush(stdin);
	printf("Enter the char :");
	scanf("%c",&t);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==t)
		printf("Found in : %d",i);
	}
	return 0;
}
