#include<stdio.h>
#include<stdlib.h>
void testfun(char *buf)
{
	char str[10]={0};
	strcpy(str,buf);
	printf("%s",str);
}
int main()
{
	int i=0;
	for(i=0;i<9;i++)
		printf("%d\n",i+1+3);
	testfun("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	return 1;
}
