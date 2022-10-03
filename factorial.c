#include<stdio.h>
#include<conio.h>
int main()
{
	int fact=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(fact>0)
			fact=fact*i;
		else
		    printf("enter valid number");
	}
	printf("factorial of a number %d is:%d",n,fact);
	return 0;
}
