#include <stdio.h>
#include <conio.h>
int main (void)
{
	char ascii;
	char option;
	do{
	printf("Enter Any Key and Get ASCII:");
	scanf("%c",&ascii);
	printf("Value Of %c is %d",ascii,ascii);
	printf("Do you want Play again y/n \n");
	scanf("%c",&ascii);
	option=getche();
}while(option=='y');
}
