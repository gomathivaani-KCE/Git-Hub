#include <stdio.h>

int main(void) {
	// your code goes here
	unsigned long long int n,sum=0;
	scanf("%llu",&n);
	while(n!=0)
	{
		sum=sum*10+(n%10);
		n=n/10;
	}
	printf("%llu",sum);
	return 0;
}
