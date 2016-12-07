#include<stdio.h>
#include<string.h>
int main()
{
char string[100];
scanf("%[^\n]s",string);
int j=strlen(string);
int i=0;
j--;
while(i<=j)
{
	char temp=string[i];
	string[i]=string[j];
	string[j]=temp;
	j--;
	i++;
}
	printf("%s",string);
	return 0;
}


