//Write c program to display 2 4 6 .....10 using do while loop

#include<stdio.h>
main()
{
	int i=2;
	do{
		printf("%d ",i);
		i=i+2;
	}
	while(i <= 10);
}
