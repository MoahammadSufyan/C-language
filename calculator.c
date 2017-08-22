#include <stdio.h>
#include <conio.h>
int main (void)
{   
    char option;
    int n,num1,num2,result;
    do
    {
    	system("color 3");
	printf("\nwaht opration do you want to do?\n");
	printf("Press 1 for Addition\n");
	printf("Press 2 for Subtraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 1 for Division\n");
	scanf("%d",&n);
	printf("Enetr Your First Number:");
	scanf("%d",&num1);
	printf("Enetr Your second Number:");
	scanf("%d",&num2);
	switch(n){
		case 1: result=num1+num2;
		printf("Your Addition Result is %d",result);
		break;
		case 2:result=num1-num2;
		printf("Your Subtraction Result is %d",result);
		break;
		case 3:result=num1*num2;
		printf("Your Multiplication Result is %d",result);
		break;
		case 4:result=num1/num2;
		printf("Your Division Result is %d",result);
		break;
		default:
			printf("Rong input");
	}
	printf("\nDo want to continiue y/n:");
	option=getche();
}while(option=='y');
	getch();
	return 0;
}
