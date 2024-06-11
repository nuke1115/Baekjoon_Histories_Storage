#include <stdio.h>
#include <list>
using namespace std;

int amain()
{
	list<int> studentQueue;
	list<int>::iterator fuck;
	

	int num, selectedNum;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		fuck = studentQueue.begin();
		scanf_s("%d", &selectedNum);

		for (int k = 0; k < selectedNum; k++)
		{
			fuck++;
		}

		studentQueue.insert(fuck, i);

	}

	for (int i = 0; i < num; i++)
	{
		printf("%d ",studentQueue.back());
		studentQueue.pop_back();
	}



	return 0;
}