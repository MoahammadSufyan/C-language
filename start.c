#include <stdio.h>
#include <conio.h>
int main (void)
{
	int i,sp,st;
	//4
	for(i=1;i<=20;i++){
		// print space
		for(sp=1;sp<=20-i;sp++){
			printf(" ");
		}
		//start print
		for(st=1;st<=i;st++){
			printf("*");
			if(st!=i){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
