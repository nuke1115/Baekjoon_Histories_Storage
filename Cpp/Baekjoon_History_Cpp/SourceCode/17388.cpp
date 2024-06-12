#include <stdio.h>
int amain()
{
	int s, k, h;

	scanf_s("%d %d %d",&s,&k,&h);
	if (s+k+h >= 100)
	{
		puts("OK");
	}
	else
	{
		if (s > k )
		{
			if (k > h)
			{
				puts("HanYang");
			}
			else
			{
				puts("Korea");
			}
		}
		else
		{
			if (s > h)
			{
				puts("HanYang");
			}
			else
			{
				puts("Soongsil");
			}
		}
	}

	return 0;
}