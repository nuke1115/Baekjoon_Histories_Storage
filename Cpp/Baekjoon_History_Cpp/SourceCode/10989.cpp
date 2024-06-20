#include <iostream>
using namespace std;

int amain()
{
	int *nums = new int[10001]{0}, tmp, num;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> tmp;
		nums[tmp - 1] += 1;

	}

	for (int i = 0; i < 10000; i++)
	{
		for (int f = 0; f < nums[i]; f++)
		{
			cout << i + 1 << "\n";
		}

		if (!nums[i + 1])
		{
			i += 1;
		}
	}
	
	delete[] nums;


	return 0;
}
//https://hegosumluxmundij.tistory.com/54
//https://www.acmicpc.net/blog/view/128
#pragma region oldMy
#include <stdio.h>

int omain()
{
	int* nums = new int[10001] { 0 }, tmp, num;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &tmp);
		nums[tmp - 1] += 1;

	}

	for (int i = 0; i < 10000; i++)
	{
		for (int f = 0; f < nums[i]; f++)
		{
			printf("%d\n", i + 1);
		}

		if (!nums[i + 1])
		{
			i += 1;
		}
	}

	delete[] nums;


	return 0;
}
#pragma endregion
