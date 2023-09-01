#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
	float deg,x,num,den,sum,term;
	int i;
	printf("enter degree:");
	scanf("%f",&deg);
	x=deg*(PI/180.0);
	 num=x;
	 den=1;
	 i=1;
	 sum=0;
	 do
	 {
	 	term=num/den;
	 	sum=sum+term;
    	num=-num*x*x;
    	i=i+2;
    	den=den*i*(i-1);
    }
    while(term>=0.00001);
    printf("The sum is: %.2f", sum);
    printf("valuer is sin(%.2f)=%.2f \n",deg,sin(x));		 
	
	return 0;
}	
