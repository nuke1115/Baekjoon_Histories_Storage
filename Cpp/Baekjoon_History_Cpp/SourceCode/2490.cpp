#include <stdio.h>
int amain()
{
	int a,b,c,d,i=0;
	for (;i<3;i++)
	{
		scanf_s("%d%d%d%d",&a,&b,&c,&d);
		printf("%c\n","DCBAE"[a+b+c+d]);
	}
	return 0;
}