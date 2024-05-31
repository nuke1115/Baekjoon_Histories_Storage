#include <stdio.h>
#include <string>
using namespace std;
int amain()
{
	int num;
	string* tmp;

	scanf_s("%d", &num);

	tmp = new string[num];

	for (int i = 1; i <= num; i++)
	{
		for (int s1 = 1; s1 <= i; s1++)
		{
			printf("*");
			tmp[i - 1].append("*");
		}

		for (int b = num * 2 - i * 2; b > 0; b--)
		{
			printf(" ");
			tmp[i - 1].append(" ");
		}

		for (int s2 = 1; s2 <= i; s2++)
		{
			printf("*");
			tmp[i - 1].append("*");
		}
		printf("\n");
	}

	for (int i = num - 2; i >= 0; i--)
	{
		printf("%s\n",tmp[i].c_str());
	}

	delete[] tmp;
	return 0;
}