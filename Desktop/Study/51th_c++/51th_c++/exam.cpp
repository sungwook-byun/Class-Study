#include<stdio.h>


int main()
{
	int iArray[10] = { 44, 99, 47, 76, 26, 11, 46, 87, 56, 28 };
	int iNum = sizeof(iArray) / sizeof(int);
	

	for (int j = 0; j < iNum - 1; ++j)
	{
		int check = 0; // 0���� �ʱ�ȭ
		for (int i = 0; i < iNum - (1 + j); ++i)
		{
			if (iArray[i] > iArray[i + 1])
			{
				int Temp = iArray[i];
				iArray[i] = iArray[i + 1];
				iArray[i + 1] = Temp;
				check++; // �ڸ� �ٲ��� ������� Ƚ���� ������Ŵ
			}
		}
		// �ڸ� �ٲ��� ���ٸ� ����
		if (check == 0)
			break;
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d \n", iArray[i]);
	}
	return 0;
}