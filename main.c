#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int g_index=0;
void testfun(char *buf)
{
	char str[10]={0};
	strcpy(str,buf);
	printf("%s",str);
}
void testfun1(char *buf)
{
	char str[10]={0};
	strcpy(str,buf);
	printf("%s",str);
}
void testfun2(char *buf)
{
	char str[10]={0};
	strcpy(str,buf);
	printf("%s",str);
}
void testfun3(char *buf)
{
	char str[10]={0};
	strcpy(str,buf);
	printf("%s",str);
}
void testfun4(char *buf)
{
	char str[10]={0};
	strcpy(str,buf);
	printf("%s",str);
}
void testfun5(char *buf)
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
	testfun1("xxxxx");
	testfun("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	return 1;
}
