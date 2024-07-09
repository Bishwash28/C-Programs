#include<stdio.h>
int long fact(int);
int main()
{
	int a;
	printf("Enter the Number\n");
	scanf("%d",&a);
	printf("Factorial of %d is %d.",a,fact(a));
	return 0;
}
 int long fact(int n)
 {
 
	 if (n<1)
	 	return 1;
	 
	 else
	 
	 	return n*fact(n-1);
}
