#include <stdio.h>
#include <cstring>

#define COLD 1
#define HOT 2
#define TIRED 4
#define BLEED 8

#define SKILL_SUM (COLD + BLEED);

// & �� �� ��(1) �� ��쿡�� 1
// | �� �� �ϳ��� ��(1) �̸� 1


	// ���� �̻� �ɸ��� ü���� �����ϴ� ���
	// ���� �̻��� Ǯ�� ������ ü���� ȸ���ϴ� ���
int main()
{
	int Status = 0;

// HP�� 100%�� ������ ����� ������
	int Hp = 100;
	
	// COLD��� ���°�, TIRED��� ���°��� �ο���
	Status |= SKILL_SUM;
	Status |= TIRED;

//	char Now_Hp[10];
	int Now_Hp = 0;

	// ���� COLD ���¶�� HP�� 40�� ��� ��Ʈ ���
	if (Status & COLD)
	{
		printf("��� ���� �Դϴ�. \n");
		Hp -= 40;
		
		printf("���� ������ ���Ͻø� 1���� �Է��� �ּ���. \n");
		scanf_s("%d", &Now_Hp);
		//gets_s(Now_Hp);
		

//		char Now_Hp2[10] = "����";

		if (Now_Hp == 1)
		{

			printf("���� ���� �Ϸ� \n");
			Hp += 10;
			Status &= ~COLD;
			printf("ü���� 10 �ö� ���� ü���� %d �̸� ����� ���� �˴ϴ�. \n", Hp);
		}
		else
		{
			printf("������ �������� �ʾҽ��ϴ�. \n");
			printf("���� ü���� %d �̸� ��� ���� �Դϴ�. \n", Hp);
		}
	}
// �߰�ȣ�� ����
	else
	{
		printf("��� ���°� �ƴմϴ�.");
	}


	Status;

	return Hp;
}