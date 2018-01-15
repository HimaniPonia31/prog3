#include<stdio.h>
void main()
{
	int i;
	char n;
	printf("enter a character");
	scanf("%s",&n);
	if(n=='a'|| n=='e'||n=='i'||n=='o'||n=='u')
	{
	printf("%s vowel",n);
	}
	else
	{
		printf("constant %s",n);
	}
	
}
