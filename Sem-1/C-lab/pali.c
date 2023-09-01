#include<stdio.h>
int main()
{
	int n,rev,rem,ori;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	ori=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		}
	if(ori==rev)
	{
		printf("%d is a palindrome number \n",ori);
	}
	else
	{
		printf("%d is not a palindrom \n", ori);
	}
	return 0;
}	
