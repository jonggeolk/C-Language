#include <stdio.h>
#include <time.h>


void UpdateHPBar(int life)
{
	for (int i = 0; i < life; i++)
	{
		printf("��");
	}
}

void UpdateUI()
{
	printf("\n��ǻ�Ͱ� ������ �ִ� �� : ");
}

int main()
{
#pragma region rand �Լ�
	// 0 ~ 32767 ������ ���� ���� �����ϰ� ��ȯ�ϴ� �Լ��Դϴ�.

	// seed ������ ���� �ð��� ������ �ʴ� seed ���� 
	// ����ؼ� ��ȭ�Ǳ� ������ ������ ������ ������
	// ������ ���� ���� �� �ֽ��ϴ�.
	//srand(time(NULL));

	//int seed = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	seed = rand() % 10 + 1;

	//	printf("seed�� �� : %d\n", seed);
	//}

#pragma endregion

#pragma region UP DOWN GAME

	//int life = 5;

	//srand(time(NULL));

	//// 1. ��ǻ�� ������ 1 ~ 50������ ���� ���� �־��ݴϴ�.
	//int computer = rand() % 50 + 1;

	//// 2. ��ǻ�Ͱ� ������ �ִ� ���� ���߱� ���� ���� ����
	//int answer = 0;

	//while (1)
	//{
	//	UpdateHPBar(life); // HPBar�� ����ϴ� �Լ�

	//	UpdateUI();	// �Է��� ���� �� �ִ� �ؽ�Ʈ�� ����ϴ� �Լ�

	//	// ��ǻ�Ͱ� ������ �ִ� ���� �Է��մϴ�.
	//	scanf_s("%d", &answer);

	//	system("cls");

	//	if (answer == computer)
	//	{
	//		printf("\n V i c t o r y");
	//		break;
	//	}
	//	else if (answer < computer)
	//	{
	//		life--;
	//		printf("\n��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
	//	}
	//	else if (answer > computer)
	//	{
	//		life--;
	//		printf("\n��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
	//	}

	//	if (life <= 0)
	//	{
	//		printf("\nDefeat");
	//		break;
	//	}
	//}
#pragma endregion

	return 0;
}
