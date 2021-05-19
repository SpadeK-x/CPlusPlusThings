#include<stdio.h>
#include<ctype.h>
int main(void)
{
	printf("1=up to low    2=low to up\n");
	int in;
	scanf("%d",&in);
	getchar();
	char a[200];
	gets(a);
	int i=0;
	switch(in)
	{
		case 1:
		while(a[i])
		{
			printf("%c",tolower(a[i]));
			i++;
		}
		case 2:
		while(a[i])
		{
			printf("%c",toupper(a[i]));
			i++;
		}
	}
	return 0;
}
