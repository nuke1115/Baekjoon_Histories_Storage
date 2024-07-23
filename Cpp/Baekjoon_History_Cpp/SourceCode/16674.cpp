#include <stdio.h>

int amain()
{
	int cnt2=0,cnt0=0,cnt1=0,cnt8=0,other=0;
	char tmp = 9;

	while (scanf_s("%c", &tmp)&&tmp!='\n')
	{
		if (tmp == 50)
		{
			cnt2++;
		}
		else if (tmp == 48)
		{
			cnt0++;
		}
		else if (tmp == 49)
		{
			cnt1++;
		}
		else if (tmp == 56)
		{
			cnt8++;
		}
		else
		{
			other=1;
		}
	}

	if (!other&&(cnt2 || cnt0 || cnt1 || cnt8))
	{
		if (cnt2&&cnt0&&cnt1&&cnt8)
		{
			if ((cnt2+cnt0+cnt1+cnt8)/4.0 == (float)cnt2)
			{
				putchar(56);
			}
			else
			{
				putchar(50);
			}
		}
		else
		{
			putchar(49);
		}
		
	}
	else
	{
		putchar(48);
	}
	return 0;
}