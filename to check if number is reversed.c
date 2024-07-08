#include<stdio.h>

main()

{

long num,rev=0;

int digit;

printf("Enter a number to be checked:\t");

scanf("%ld", &num);

do

{

digit = num%10;

rev = rev*10+digit;

num= num/10;

} while(num!=0);

printf("The reversed number is %ld",rev);

}
