
#include <stdio.h>
#include <conio.h>
void rep();
int main()
{
 rep();
}
void rep()
{
	char ascii;
	printf("enter your Key:");
	scanf("%c",&ascii);
	printf("Value of %c is %d",ascii,ascii);
	scanf("%c",&ascii);
	printf("\n");
	 rep();
}
