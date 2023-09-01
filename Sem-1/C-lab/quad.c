// Quadratic Equation
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2;
	printf("\n Enter the co-efficients: \n");
	scanf("%f %f %f", &a,&b,&c);
	if(a!=0)
		{
			d=(b*b)-(4*a*c);
			if(d==0)
				{
					r1=-b/(2*a);
					r2=r1;
					printf("\n The roots are equal r1=%f  r2=%f \n ", r1,r2);
				}
			else if(d>0)
				{
					r1=-b+ sqrt(d) /(2*a);
					r2=-b- sqrt(d) /(2*a);
					printf("\n The roots are unequal  r1=%f r2%f \n",r1,r2);
				}
			else
				{
					r1=-b/(2*a);
					r2= sqrt(d)/(2*a);
					printf(" \n The co-efficients are: %f+i%f",r1,r2);
					printf(" \n The co-efficients are: %f-i%f",r1,r2);
				}	
		}					
	else
		{
			printf(" Not a quadratic equation");
		}
}					

