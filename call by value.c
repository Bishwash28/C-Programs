#include<stdio.h>

#include<conio.h>

void swap(int a ,int b)

{

int temp;

temp=a;

a=b;

b=temp;

}

main()

{

int a,b;

a=99,b=89;

printf("Before function calling,a and b are:%d\t%d\n",a,b);

swap(a,b);

printf("After function call, a and b are:%d\t%d",a,b);

getch();

}
