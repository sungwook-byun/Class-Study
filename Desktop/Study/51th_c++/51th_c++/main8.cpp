#include<iostream>

typedef int MYINT;
typedef int* MYINTP;



// ����ü ũ�� Ȯ�� ��Ģ�� 1����Ʈ�� ����
#pragma pack(1)

// ==================
// ����� ���� �ڷ���(User Define Datatype)
// ����ü(struct), Ŭ����(class)
// ==================
// ����ü ũ�� ����ϴ� ���
// �⺻������ ����ü�� �����ϴ�  ���� ū ����� ũ�⸦ ����� Ȯ���� ����
// ���� ���� ū �ɹ����� ���������� �����ϴ°� �ڷ����� ũ�⸦ ���� ȿ�������� �۰� ���� �� �ִ�.


// �ȿ��� ����� ���� 8����Ʈ ��°��� �� �� ����
// �ȿ� �ִ� ���� ū �ڷ����� �������� ����� �þ. short�� ������ �ȿ� ������ 6�� �ƴ� 8��
// ū �ڷ����� �������� ���������� �ڷḦ ��ġ�ϴ°� ����


struct MyDataType
{
	int i;
	char c1;
	char c2;
	short s;
};

// 4����Ʈ�� ��� ������ ����µ� �� �տ� char�� ä��� 3����Ʈ�� ���Ƽ� ���� �������� �Ѿ��
// short�� �� �ڸ��� �ι�°�� ������ ����° ĭ�� ���� ������ ���� ����.
// ������ �ٲ㵵 8����Ʈ�� �ذ� ���������� ������ ���� 12����Ʈ�� ������ ���� ��.
struct MyDataType2
{
	char c1;
	int i;
	short s;
};

int main()
{
	// {} �� ���ָ� ����ü �ȿ� �ִ� �ڷ���� �� 0���� �ʱ�ȭ�� ��
	MyDataType a = {};		   //MyDataType�� �ƹ��͵� �������� ������
	int size = sizeof(a); //���̷� �ڷ����� �־��ִµ� 1����Ʈ�� �������� Ȯ�� �� �� ����
				
	// ����ü ������ �ɹ��� �����ؼ� ���� �Է�
	a.i = 10;
	a.s = 0;
	a.c1 = 100;

	// ������
	// �ּҸ� �����ϱ� ���� ����
	// nullptr Ű����� 0�� �ǹ�������, ������Ÿ�� �������� ������ ����
	int* p = nullptr;  // 0�� �����Ͱ� ���� �ǹ�, null , �� �ƹ��͵� ����Ű�� �ʰ� �ִ� ��� �ǹ��̴�.
/*	int i = NULL;
//	int i = nullptr; ������ �������� ������ �ֱ⶧���� ������ ��
	MYINT i3 = 0; // û�ϻ��� �������߰ų� ���� ���� �ڷ����ΰ��� �� �� ���� F12�� ������ ������ ������ �̵���
	MYINTP k = nullptr;
*/
	
	int test = 0;

	// �ּ� ���̱� ������ �����ͺ��� �ȿ��� ���� �� �ְ� �׳� ������ ������ ������
	p = &test; // test�� �ּҰ��� p�� ����
	*p = 100; // ���� �ȿ� ����ִ� �ּҸ� �����ϰڴ�.

	int test1 = *p; // 100�� test1�� ��

	// ������ Ư¡
	// ������ ������ ũ��, Ÿ�� �÷����� ���� �ٸ�, 64��Ʈ ��� �ü���� 8����Ʈ / 32��Ʈ�� 4����Ʈ
	// ������ ������ ũ�� 8����Ʈ
	{
		int* pInt = nullptr;
		char c = 0;
//		pInt = (int*)&c;


		void* pVoid = nullptr;

		int i = 0;
		short s = 0;

		pVoid = &i;
		pVoid = &s;
	}

	// ������ ����� �ڷ����� �ǹ�
	{
		char c;
		int i = 0;
		long long ll = 0;


		char*		pChar	 =		&c;
		int*		pInt	 =		&i;
		long long*	 pLL	 =		&ll;

		// void�� ������ ����
		void* pVoid = nullptr;
		pVoid = &c;
		pVoid = &i;
		pVoid = &ll;

		// ������
		// �����ͺ����� �����ϰ� �ִ� �ּҰ� �����δ� �ش� �ּ��� ���� ��ü(Ÿ��)�� ��Ȯ�ϰ� �� ���� ����.
		// ���� �����͸� ������ �� �����Ͱ� ����ų �ڷ����� �̸� ���س��� �����Ѵ�.
		*pChar;
		*pInt;
		*pLL;


		// ���� �����ص� �ؼ� ��Ŀ� ���� ���� �ٸ��� �ؼ��� �� �ִ�.
		char ca = 255;

		char* pC = &ca;
		unsigned char* pUC = (unsigned char*)&ca;

		int data = *pC;
		data = *pUC;

		float fTest = 4.f;
//		int* pData = &fTest; // 4����Ʈ�� ũ��� ������ ������ Ÿ���� �ٸ��� ������ ������ ��
	}


	{
		// void �����ʹ� �ּҿ���(���� �� �̵�) �� �Ұ����ϴ�.
		// ��� Ÿ���� ������ �ּҶ� ���� �� �ִ�.
		void* pVoid = nullptr;

		int i = 0;

		pVoid = &i;
//		*pVoid; // ���̵� �����ʹ� ���� ��ü�� �ƿ� �Ұ�����. ������ �ƿ� �� �� ��� �ƹ� Ÿ���̳� ���� �� �ִ°���
	}


	{
		MyDataType t = {};
		t.i = 10;
		t.s = 10;
		t.c1 = 10;

		MyDataType* pMyData = nullptr;
		pMyData = &t;

		// ��ȣ�� ������ �켱���� ������ ���� ������ �ؾ� �ϱ� ������ ���ִ°���.
		// �Ʒ� �� ������ ��������δ� �Ȱ��ٴ� �Ҹ���
		(*pMyData).i = 10;
		(*pMyData).s = 10;
		(*pMyData).c1 = 10;

		pMyData->i = 10;
		pMyData->s = 10;
		pMyData->c1 = 10;
	}
	`








	return 0;
}