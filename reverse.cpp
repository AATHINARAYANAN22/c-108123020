#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the n :");
	scanf("%d",&n);
	char a[n],b[n];
	printf("Enter the string :");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	b[n-i-1]=a[i];
	for(i=0;b[i]!='\0';i++)
	printf("%c",b[i]);
	return 0;
}
