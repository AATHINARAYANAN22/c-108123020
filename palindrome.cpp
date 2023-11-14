#include<stdio.h>
int main()
{
	int i,t,n;
	printf("Enter the n :");
	scanf("%d",&n);
	char a[n];
	printf("Enter the string :");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	 {
	 	if(a[n-i-1]==a[i])
		 t=0;
		else
		{
			t=1;
			break ;
		 } 
	 }
	 if(t==0)
	 printf("palindrome");
	 else
	 printf("Not palindrome");
	return 0;
}
