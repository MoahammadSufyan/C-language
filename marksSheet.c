#include <stdio.h>
#include <conio.h>
int main (void)
{
	int rn,math,computer,secience,total;
	float percentage;
	printf("\nEnter Your Roll No Plz:");
	scanf("%d",&rn);
	printf("\nEnter Your Math No:");
	scanf("%d",&math);
	printf("\nEnter Your Secience No:");
	scanf("%d",&secience);
	printf("\nEnter Your Computer No:");
	scanf("%d",&computer);
	total= math+secience+computer;
	percentage=total/3.0;
	printf("\nYour Total No is = %d",total);
	printf("\nYour Persentage is = %.2f",percentage);
	if(percentage>90){
		printf("\nCong You got A");
	}
		if(math<33){
		printf("\nOpps You Fail in Math");
	}
		if(secience<33){
		printf("\nOpps You Fail in Secience");
	}
		if(computer<33){
		printf("\nOpps You Fail in Computer");
	}
		if(computer,math,secience<33){
		printf("\nOpps You Fail in All Subjects");
	}
	getch();
}
