#include <stdio.h>

int amain()
{
	int people,totalPeople, partySize , article[5];

	scanf_s("%d %d" , &people , &partySize);

	totalPeople = people * partySize;

	int repeatNum = sizeof(article) / sizeof(int);
	for (int k = 0; k < repeatNum; k++)
	{
		scanf_s("%d" , &article[k]);
		article[k] -= totalPeople;
	}

	for (int k = 0; k < repeatNum; k++)
	{
		printf("%d " , article[k]);
	}


	return 0;
}