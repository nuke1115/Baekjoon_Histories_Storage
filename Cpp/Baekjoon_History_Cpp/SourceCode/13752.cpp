#include <stdio.h>
int amain()
{
	int repeatNum, i;
	scanf_s("%d",&repeatNum);
	while (repeatNum--)
	{
		scanf_s("%d",&i);
		while (i--)
		{
			putchar('=');
		}
		putchar('\n');
	}
	return 0;
}