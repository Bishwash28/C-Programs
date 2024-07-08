#include<stdio.h>
int main(){
	int math, science, english,total=0;
	
	float percentage = 0;
	printf("Enter the marks in three subjects\n");
	scanf("%d %d %d", &math, &science, &english);
	
	total = math + science + english;
	
	percentage = ((float)total/300) * 100;
	
	printf("the total marks obtained is = %d\n", total);
	
	printf("the percentage obtained of the student is = %.2f", percentage);
	return 0;
}

