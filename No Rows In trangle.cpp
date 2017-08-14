#include <stdio.h>
#include <conio.h>
 main()
{
	char print='*';
	int row,col;
	int noOfRows;
	printf("Enter No of Rows To be Printed\n");
	scanf("%d",&noOfRows);
	
	for(row=1;row<=noOfRows;row++){
		for(col=1;col<=row;col++){
			printf("%c",print);
		}
		printf("\n");
	}
}
