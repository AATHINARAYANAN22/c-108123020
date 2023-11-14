#include<stdlib.h>
#include<stdio.h>
int main ()
{
	int i,n,t;
	printf("Enter the length of 1st string :");
	scanf("%d",&n);
	fflush(stdin);
	char a[n],b[n];
	printf("Enter the 1st string :");
	scanf("%s",a);
	fflush(stdin);
	printf("Enter the 2nd string :");
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
	  if(a[i]!=b[i])
	  {
	  	t=0;
	  	break;
	  }
	}
	if(t==0)
	printf("Not equal");
	else
	printf("equal");
	return 0;
}
