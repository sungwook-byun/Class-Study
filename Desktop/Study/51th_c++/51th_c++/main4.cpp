#include <iostream>

// �Լ��� ȣ��Ǹ� ����ϴ� �޸� ����
// ���� �޸� ����

// ��� �Լ�
// �Լ��� ȣ��ǰ�, �ڱ� �ڽ��� �ٽ� ȣ���ϴ� ������ �Լ�
// ���� ������ ������ ���� �ݺ�ȣ��� ���� ���� �����÷ο찡 �߻��Ѵ�.

// ����(����)�ϰ� ���� �ذ��� ������ ���(ex ��������[Ʈ��] ���� ��ȸ)

// ����Լ��� ����
// 1. �ڵ尡 ����������, �ڵ��� �������� �� ����.

// ����Լ��� ����
// 1. ������.


// ��� ��ȣ�� �ϱ� ������ ���ѷ����� ��
void Recursivefuunction()
{
	Recursivefuunction();
}

// ���丮��, �Ǻ���ġ ����
// 5! = 5 * 4 * 3 * 2 * 1;




int Factorial(int _Num)
{
	int Result = 1;

	for (int i = 0; i < _Num; ++i)
	{
		Result *= i + 1;
	}
	return Result;
}

// ���丮�� ��͹���
int Factorial2(int _Num)
{
	// 10! == 10 * 9!;
	// 9! == 9 * 8!;
	// _Num! = _Num * ( _Num - 1 )!
	if (1 == _Num)
	{
		return 1;
	}
	else
	{
		// ���ڸ� �׾Ƽ� ������Ű�� 1�� ������ ������ ���ϸ鼭 ���� ��������� ����ؼ� �����
		return _Num * Factorial2(_Num - 1);
	}
}


// �Ǻ���ġ ����
// 1 1 2 3 5 8 13 21 ...
int Fibonacci(int _Num)
{
	if (1 == _Num || 2 == _Num)
	{
		return 1;
	}

	// 3�� �̻��� ��� ó�� ����(1, 1) ���� �����ؼ� �ش� ���� �����ش�.

	int iResult = 0;

	int Prev1 = 1;
	int Prev2 = 1;

	for (int i = 0; i < _Num - 2; ++i)
	{
		iResult = Prev1 + Prev2;

		Prev1 = Prev2;
		Prev2 = iResult;
	}
	return iResult;
}

// �Ǻ���ġ ����Լ� ����

int Fibonacci_Re(int _Num)
{
	if (1 == _Num || 2 == _Num)
	{
		return 1;
	}

	return Fibonacci_Re(_Num - 1) + Fibonacci_Re(_Num - 2);
}




// ctrl ����ä�� k, f ������ �� (�巡���ϰ�)

// ���� ��� main -> Aȣ�� -> Bȣ�� -> Cȣ�� -> C���� -> B���� -> A���� -> main����
// �Լ��� �ʹ� ���� ���̸� ���� �����ȿ� �ִ� �Է��� �ʰ��ϸ鼭 ���� over flow�� �߻���
void CFunc()
{

}

void BFunc()
{
	CFunc();
}


void AFunc()
{
	BFunc();
}

int main() 
{
	// ȣ�⽺������ Ȯ��
	AFunc();

	// ���ѷ��� Ȯ��
	Recursivefuunction();

	int i = Factorial(3);

	int j = Factorial2(3);

	int iReturn = 0;
	iReturn = Fibonacci(1);
	iReturn = Fibonacci(2);
	iReturn = Fibonacci(3);
	iReturn = Fibonacci(4);

	// ����Լ�������� �����ϸ� ���� ���� ���Ϸ��� �ʹ� ���� �Լ��� ȣ��Ƚ���� �߻��Ѵ�.
	iReturn = Fibonacci(48);

	return 0;
}