#include <stdio.h>
#include <string.h>
const float KG_1_TO_lb = 2.2046;
const float LB_1_TO_KG = 0.4536;
const float L_1_TO_G = 0.2642;
const float G_1_TO_L = 3.7854;


int amain()
{
	int testCase;
	float num;
	char identifier[3];
	scanf_s("%d",&testCase);

	for (int i = 0; i < testCase; i++)
	{
		scanf_s("%f %s", &num, identifier , sizeof(identifier));

		if (!strcmp("kg",identifier))
		{
			printf("%.4f lb\n",num*KG_1_TO_lb);
		}
		else if (!strcmp("lb", identifier))
		{
			printf("%.4f kg\n" , num*LB_1_TO_KG);
		}

		if (!strcmp("l", identifier))
		{
			printf("%.4f g\n" , num*L_1_TO_G);
		}
		else if (!strcmp("g", identifier))
		{
			printf("%.4f l\n", num*G_1_TO_L);
		}
	}
	return 0;
}