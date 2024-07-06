#include <stdio.h>
#include <cmath>
int amain()
{
	int roomCnt, tmp, B, C,*people;
	long long cnt = 0;
	scanf_s("%d",&roomCnt);
	people = new int[roomCnt];

	for (int i = 0; i < roomCnt; i++)
	{
		scanf_s("%d",&tmp);
		people[i] = tmp;
	}
	scanf_s("%d%d",&B,&C);
	for (int i = 0; i < roomCnt; i++)
	{
		tmp = people[i] - B;
		cnt++;
		if (tmp>0)
		{
			cnt += ceil((float)tmp / C);
			
		}
	}
	printf("%lld",cnt);

	delete[] people;
	return 0;
}
