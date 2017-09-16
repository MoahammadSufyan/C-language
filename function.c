#include <stdio.h>
#include <conio.h>
void sum();
int main (void)
{
	system("color B1");
   sum();
//   printf("\n");
//   sum();
   
}
void sum()
{
	int a,b;
printf("Enetr Your First No:");
scanf("%d",&a);
printf("Enetr Your First No:");
scanf("%d",&b);
printf("Your Result is %d & %d is %d",a,b,a+b);
printf("\n");
sum();
}
