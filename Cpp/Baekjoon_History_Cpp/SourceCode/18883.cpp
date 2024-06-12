#include <stdio.h>
int amain()
{
	int n, m;

	scanf_s("%d %d",&n,&m);

	for (int i = 1 , goal = n*m; i <= goal; i++)
	{
		if (i % m == 0)
		{
			printf("%d\n",i);
		}
		else
		{
			printf("%d ",i);
		}
	}

	return 0;
}