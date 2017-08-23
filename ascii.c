#include <stdio.h>
#include <conio.h>
int main (void)
{
	char ascii;
	printf("Enter Any Key and Get ASCII:");
	scanf("%c",&ascii);
	printf("Value Of %c is %d",ascii,ascii);
	getch();
}
