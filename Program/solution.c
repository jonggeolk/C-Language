#include <stdio.h>

void Function()
{
	printf("Function");
}
int Add(int x, int y)
{
	return x + y;
}

int Minus(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;

	// �Լ��� ȣ���� �� ������ ���� �μ��� �����ϰ� �Ǹ�
	// �Լ��� �Ű� ������ ������ ����� ���� ���޵Ǳ� ������
	// �μ��� ������ ������ �Լ� ������ �˾ ���꿡 ����
	// ������ ���� �ʽ��ϴ�.
	
}


void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.
	
	//������ : camel
	//ex) countDo

	//�Լ��� : pascal
	//ex) Attack

	//Function();

	// �Լ��� ȣ��� �� �Լ��� ȣ��Ǵ� ���� ��������
	// �Ѿ�� �˴ϴ�.

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ�
	// ���� ����ϴ� �����Դϴ�.

	//printf("Add�Լ��� ��� : %d\n", Add(10, 20));
	//printf("Add�Լ��� ��� : %d\n", Minus(10, 20));
	//

	//// �Ű� ������ �Լ� ���ο����� ������ �̷������, �Լ��� ����Ǹ�
	//// �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.

	//printf("Add�Լ��� ��� : %d\n", Multiple(5.75f, 27.65f));
	
	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������
	// ���ϴ� ���� ���� �� �����ϴ�.
	
#pragma endregion
#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű������� ������ ���޵Ǵ� ���Դϴ�.

	// A(10) <-> B(20)

	// A 20
	// B 10
	
		int a = 10;
		int b = 20;
		int temp = 0;

		temp = b;
		b = a;
		a = temp;

		printf("a ������ �� : %d\n", a);
		printf("b ������ �� : %d\n", b);
		



	// �μ��� ��� �Լ��� �ִ� �Ű������� ���� ���� ������ �� �ִ�
	// �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ���� ���޹޴�
	// �Ű������� �ڷ����� ���� ��ġ�ؾ� �մϴ�.

#pragma endregion



#pragma endregion

}
