#include <stdio.h>

void main()
{
#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������
	// �̷���� �� ������ �����ߴ� �ڷ����� �ٸ� �ڷ�������
	// ��ȯ�ϴ� �����Դϴ�.

#pragma region �Ϲ��� �� ��ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ�����
	// ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.
	// ex) int + float = float + float

	//int integer = 10;
	//float decimal = 6.5f;

	//printf("integer(������) + decimal(�Ǽ���) : %f", integer + decimal);

	//// ǥ�� ������ ���� �����Ϳ� ǥ�������� ū �����͸� �����ϰ� �Ǹ�
	//// �Ϲ������� ������ �ս��� �߻��ϰ� �˴ϴ�.

	//integer = decimal;

	//printf("integer������ �� : %d\n", integer);


#pragma endregion

#pragma region ����� �� ��ȯ
	// ������ �̷������ ���� ����ڰ� ���� �ڷ�����
	// ��ȯ�ϴ� �����Դϴ�.

	//int x = 5;
	//int y = 2;  // float �ص���

	//float result = (float) x / y; 

	//printf("result ������ �� : %f\n", result);

	// ������ �������� ������ �����ϰ� �Ǹ� ������
	// ������� ���� �� �ֽ��ϴ�.



#pragma endregion


#pragma endregion

#pragma region ����Ʈ ������
	// ��Ʈ ���� �־��� ���ڸ�ŭ ��ȣ ��������
	// �̵���Ű�� �������Դϴ�.

	//char data = 10; // 0000 1010

	//printf("data������ ���� 2�� ����Ʈ ������ ���: %d\n", data << 2); // 0010 1000
	//printf("data������ �� : %d\n", data); // 0010 1000
	//
	//printf("data������ ���������� 3�� ����Ʈ ������ ��� : %d\n", data >>= 3); // 0000 0001
	//printf("data������ �� : %d\n", data);

#pragma endregion

#pragma region ��ȣ ���� �ڷ���
	// ��ȣ ��Ʈ�� �����Ͽ� ���� ������
	// ����� ������ 2�� Ȯ���Ű�� �ڷ����Դϴ�.

	//unsigned int alphabet = -1;

	//// %u : unsigned �ڷ����� ����ϴ� ���� ������
	//printf("alphabet ������ �� %d\n", alphabet);

	// %d: ������ ��µ�
	////[1111 1111] [1111 1111] [1111 1111] [1111 1111]
	////printf("alphabet ������ �� %u\n", alphabet);

	////[1111 1111] [1111 1111] [1111 1111] [1111 1111]

#pragma endregion
}