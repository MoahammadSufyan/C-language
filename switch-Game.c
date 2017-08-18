#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main (void)
{   int Game;
    system("color B1");
	printf("1.Load Game");
	printf("\n2.New Game");
	printf("\n3.Multi-Player");
	printf("\n3.Exit");
	 printf("\nEnter Your Choise");
	 scanf("%d", &Game);
	switch(Game){
	 case 1:
	 	printf("Load Game...");
	 	break;
	 	case 2:
	 	printf("Multi-Player...");
	 	break;
	 	case 3:
	 	printf("Exit...");
	 	break;
	 	break;
	 	default:
	 	printf("Plz Insert Corect Value...");
	 	
	}
}
