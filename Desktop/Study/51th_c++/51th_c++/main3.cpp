#include <stdio.h>
#include <iostream>

// ������ ����
// 1. �������� - Ư�� ����(�Լ�) �ȿ� ����� ����
// 2. �������� - ��������, ��������(static), �ܺκ���(extern)

// �޸� ����
// 1. ����   -  �Լ�, ��������
// 2. ������ -  ��������	
// 3. ��     -  ���� �Ҵ�
// 4. ROM(Read Only Memory)    -  �ڵ� �� �ʱ�ȭ ������	


// �Լ�
// ��ȯ Ÿ��, �Լ� �̸�, �Է� ���� Ÿ��

//int Add(int, int) // 
//{
//
//}

int Add2(int, int); //  ���� ����, Linking

int Add2(int a, int b) // 
{
//	int result = a + b;
//	return result;

	return a + b;
}

int Pow(int Num, int Exponent)
{
	int Result = 1;
	for (int i = 0; i < Exponent; ++i)
	{
		Result *= Num;
	}
	return Result;
}



// ������ �Լ�
int main()
{
	// ����
	// �ڷ���(Data Type)
	// ������, �Ǽ���
	int a = 0; // ��������

	// �Լ� ȣ��
	int i = Add2(100, 200);

	i = Pow(2, 3);

	return 0;


}