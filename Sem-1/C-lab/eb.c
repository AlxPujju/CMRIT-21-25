#include<string.h>
#include<stdio.h>
int main()
{
	int u,tot,ch;
	char name[20];
	printf("\nEnter the name:");
	scanf("%s",name);
	printf("\n Enter the units: ");
	scanf("%d",&u);
	if (u==0)
	printf("The amount is: 100");
	else if(u>0 && u<=200)
	ch=u*0.8;
	else if(u>=200 && u<=300)
	ch=200*0.8+(u-200)*0.9;
	else if(u>300)
	ch=200*0.8+100*0.9+(u-300)*1;
	else
	{
		printf("Invalid Unit");
		return 1;
	}
	tot=ch+100;
	if(tot>400)
	{
		tot=tot+(tot*0.15);
		printf("\nThe amount is: %d",tot);
		printf("\nName of costumer: %s",name);
	}
	else
	{
		printf("The amount is: %d",tot);
		printf("\nName of costumer: %s",name);
	}	
	return 0;
}			
