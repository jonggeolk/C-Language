#include <stdio.h>

void main()
{
#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� ���� �Դϴ�.

	//int data = 10;
	//double pi = 3.14;
	//
	//// 8 byte
	//// [NULL] = 0
	//int * ptr = NULL;

	//// ������ ������ �ڽ��� �޸� ������ ������ ������,
	//// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������
	//// ���� �ּҸ� ����Ű�� �˴ϴ�.
	//
	////	 ptr�� ����
	////[data�� �����ּ�] <---- data�� ���� �ּ�
	//ptr = &data;

	//// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�,
	//// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�
	//// �����Ͱ� ����Ű�� �޸��� �ڷ������� �������־�� �մϴ�.

	//printf("data ������ �޸� �ּ� : %p\n", &data);
	//printf("ptr ������ �� : %p\n", ptr);
	//printf("ptr ������ �޸� �ּ� : %p\n", &ptr);

	//printf("data ������ �� : %d\n", data);
	//printf("ptr ������ ����Ű�� �� : %d\n", *ptr);

	//// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ�����
	//// ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.

	//ptr = &pi;
	//printf("pi ������ �� : %lf\n", pi);
	//printf("ptr ������ ����Ű�� �� : %lf\n", *ptr);

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ����
	// ó���� �� �ִ� ũ��� ��������, �� ���� ó���� �� �ִ�
	// ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.



#pragma endregion

#pragma region sizeof ������
	// �ǿ������� ũ�⸦ ����Ʈ ������ ��ȯ�ϴ� �������Դϴ�.

	int* pointer = NULL;

	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
	printf("short �ڷ����� ũ�� : %d\n", sizeof(short));
	printf("int �ڷ����� ũ�� : %d\n", sizeof(int));
	printf("long �ڷ����� ũ�� : %d\n", sizeof(long));
	printf("float �ڷ����� ũ�� : %d\n", sizeof(float));
	printf("double �ڷ����� ũ�� : %d\n", sizeof(double));
	printf("pointer �ڷ����� ũ�� : %d\n", sizeof(pointer));

#pragma endregion

}
