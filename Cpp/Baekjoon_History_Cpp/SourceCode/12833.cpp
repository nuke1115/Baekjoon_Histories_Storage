#include <stdio.h>

#pragma region shortver
int smain()
{
	int a,b,c,r;
	scanf_s("%d%d%d", &a, &b, &c);
	if (c & 1)
	{
		r = a ^ b;
	}
	else
	{
		r = a;
	}

	printf("%d", r);

	return 0;
}
#pragma endregion


#pragma region old
int omain()
{
	int nums[3], result;
	scanf_s("%d%d%d", &nums[0], &nums[1], &nums[2]);
	if (nums[2] & 1)
	{
		result = nums[0] ^ nums[1];
	}
	else
	{
		result = nums[0];
	}

	printf("%d", result);

	return 0;
}
#pragma endregion
