#include <iostream>

// �Լ��� ȣ��Ǹ� ����ϴ� �޸� ����
// ���� �޸� ����

// ��� �Լ�
// �Լ��� ȣ��ǰ�, �ڱ� �ڽ��� �ٽ� ȣ���ϴ� ������ �Լ�
// ���� ������ ������ ���� �ݺ�ȣ��� ���� ���� �����÷ο찡 �߻��Ѵ�.
//  

// ����(����)�ϰ� ���� �ذ��� ������ ���(ex ��������[Ʈ��] ���� ��ȸ)


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

	return 0;
}