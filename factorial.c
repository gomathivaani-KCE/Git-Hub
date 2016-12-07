#include <stdio.h>
unsigned long long int fact(unsigned long long int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main(void) {
	// your code goes here
	unsigned long long int n;
	scanf("%llu",&n);
	printf("%llu",fact(n));
	return 0;
}
