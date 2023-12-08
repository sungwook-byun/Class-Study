#include <stdio.h>

// ���丮�� for������ ����
int Factorial1(int num)
{
	int result = 1;
	for (int i = 0; i < num; ++i)
	{
		//	result = result * (i + 1);
		result = result * (i + 1);
		// 0�϶� 1�� �����
		// 1�϶� 2�� �����
		// 2�϶� 3�� �����
	}
	return result;
}

// ���丮�� ����Լ��� ����
int Factorial2(int num)
{
	if (num == 1)
	{
		return 1;
	}
	return (num * Factorial2(num-1));
}

int Fibonacci(int num)
{
	int result = 0;
	int a = 1;
	int b = 1;

	if (num == 1 || num == 2)
	{
		return 1;
	}
	// else�� ���� �� �ʿ䰡 ����
	// if���̶�°� ���ϴ� ������ ���� ���� ���°��̱� ������ �� ���ǿ� �����ϸ� 
	// else ���� �׳� ���� �Ʒ��� ���Ӱ� �����ϴ� for���� ���°� �� �����ϰ� �����.
	else
	{
		for (int i = 0; i < num - 2; ++i)
		{
			result = a + b;

			a = b;
			b = result;
			// i = 0 �̸� result = 2
			// i = 1 �̸� result = 2
			// i = 2 �̸� result = 2
			// i = 3 �̸� result = 2
		}
	}
	return result;
}


// �Ǻ���ġ���� ����Լ� ����
// // 1 1 2 3 5 8 13 ...
int Fibonacci2(int num)
{
	int result = 0;
	int a = 1;
	int b = 1;

	if (num == 1 || num == 2)
	{
		return 1;
	}

	return Fibonacci2(num-2) + Fibonacci2(num-1);
}


int main()
{
	// ���丮���� for������ ����
//	int data = Factorial1(2);

	// ���丮���� ����Լ��� ����
//	int data = Factorial2(5);
	int data2 = Fibonacci(7);


	return 0;
}