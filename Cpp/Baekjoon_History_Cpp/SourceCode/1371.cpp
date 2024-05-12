#include <stdio.h>

int main()
{
	char a;
	for (int i = 0; i <= 6; i++)
	{
		scanf_s("%c", &a);
		printf("%d" , a == '\0');
	}


	return 0;
}