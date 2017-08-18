#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main (void)
{
	int i;
	system("color B1");
	for(i=1;i<=10;i++){
		if(i==3){
			continue;
		}
		if(i==5){
			break;
		}
		printf("\t%d",i);
	}
	getch();
}

