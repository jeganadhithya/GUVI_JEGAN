#include<stdio.h>

int main(void) {
	// your code goes here
		int n;
	printf("enter the value of:");
	scanf("%d",&n);
 
	if(n<0)
	{
	printf("the number is negative");
	}
 
	else if(n==0)
	{
	printf("the number is zero");
}
	else if (n>0) 
	{
	printf("the number is positive");
	}
	else
	{
		printf("invalid input");
	return 0;
}
