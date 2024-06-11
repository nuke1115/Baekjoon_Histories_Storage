#include <stdio.h>
int amain()
{
	float px, rx,vx;

	scanf_s("%f %f",&px,&rx);
	vx = px / rx;

	if (vx < 0.2)
	{
		puts("weak");
	}
	else if (vx >= 0.2 && vx < 0.4)
	{
		puts("normal");
	}
	else if (vx >= 0.4 && vx < 0.6)
	{
		puts("strong");
	}
	else if (vx >= 0.6)
	{
		puts("very strong");
	}


	return 0;
}