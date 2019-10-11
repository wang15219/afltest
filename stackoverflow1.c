#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "AAAAAAAAAAAAAAAAAAAAAAAA";
	vulnfun(str);
	return;
}

int vulnfun(char *str)
{
	char stack[10];
	strcpy(stack,str);		// 这里造成溢出！	
}
