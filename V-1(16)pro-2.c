#include<stdio.h>

main()
{
	char a;
	printf("enter your value=");
	scanf("%c",&a);
	
	if(a>='a'&&a<='z')
	{
		printf("value is character");
		
	}
	else if(a>='0'&& a<'15')
	{
		printf("digit print ");	
	}
	else
	{
		printf("sp. char");
	}
}
