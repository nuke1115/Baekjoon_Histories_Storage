#include <stdio.h>
int amain()
{
	int input,checkNum = 1,IsItSquareNumber = 0;
	scanf_s("%d", &input);

	for (int i = 0 ; i <= 30; i++)
	{
		if (checkNum == input)
		{
			IsItSquareNumber = 1;
			break;
		}

		checkNum <<= 1;
	}

	printf("%d",IsItSquareNumber);


	return 0;
}
/*
���ǹ� �ݺ� ���� ����

2^30�� ���� ��������
2^29���� ������ ������ ���ͼ� checkNum�� ��Ʈ�� �о, �� �� ���� �˻����� �ʾƼ� �߻��߾���
�ݺ�Ƚ���� 30=>31���� ����


*/