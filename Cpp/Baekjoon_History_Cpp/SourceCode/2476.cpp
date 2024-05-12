#include <stdio.h>

int main()
{
	int testCase, maximumPrice = 0, priceTmp , numMax;
	int nums[3];
	scanf_s("%d" , &testCase);


	for (int i = 0; i < testCase; i++)
	{
		priceTmp = 0, numMax = 0;

		scanf_s("%d %d %d" , &nums[0] , &nums[1] , &nums[2]);
		numMax = nums[0] > (nums[1] > nums[2] ? nums[1] : nums[2]) ? nums[0] : (nums[1] > nums[2] ? nums[1] : nums[2]);

		if (nums[0] == nums[1] && nums[1] == nums[2])
		{
			priceTmp = 10000 + nums[0] * 1000;
		}
		else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2])
		{
			priceTmp = numMax * 100;
		}
		else
		{
			if (nums[0] == nums[1] || nums[0] == nums[2])
			{
				priceTmp = 1000 + nums[0] * 100;
			}
			else if (nums[1] == nums[2])
			{
				priceTmp = 1000 + nums[1] * 100;
			}
		}






		maximumPrice = priceTmp > maximumPrice ? priceTmp : maximumPrice;

	}

	printf("%d" , maximumPrice);

	return 0;
}