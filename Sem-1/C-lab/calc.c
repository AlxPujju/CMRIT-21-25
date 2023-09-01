// Program to simulate a simple calculator
#include<stdio.h>
int main()
{
	int num1,num2,sum;
	char op;
	printf(" Enter the operator: ");
	scanf("%c" ,&op);
	printf(" Enter Two Numbers: ");
	scanf("%d %d",&num1,&num2);
	if(op=='+')
	{
		sum=num1+num2;
	}
	printf("\n %d %c %d = %d\n" ,num1,op,num2,sum);
	return 0;
}	
