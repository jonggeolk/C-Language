#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� �������Դϴ�.

	//int data = 0;
	//int result = 0;

	//result = ++data; // result :  1 <-data : 1
	//result = data--; // result :  1 <-data : 0

	//printf("data�� ��: %d\n", data); 
	//printf("result�� ��: %d\n", result); 

	//result = data++; // result : 0 <-data : 1
	//result = --data; // result : 0 <-data : 0

	//printf("data�� ��: %d\n", data); 
	//printf("result�� ��: %d\n", result);

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� ������
	// ������, ���� ���� �����ڴ� ������ ������ ���� ������
	// ���� ������ŵ�ϴ�.

#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ
	// �ݺ��ϴ� �ݸ��Դϴ�.
	
	// 1�ʱ��-> int i = 0;                      
	// 2���ǽ�->i < 5;
	// 3������->i++(����Ŭ�� �ʿ� ����)
	// for (1 2 3)
	// {
	//	 frintf(����� ����)
	// }

	/*for (int i = 0; i < 5; i++)
	{
		printf("Hello World\n");
	}*/

	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ�������
	// ����Ǵ� ������ �߻��մϴ�.
#pragma endregion

#pragma region for�� ���� ����
	
	
	// 1 ~ 5 ������ ���� ������� ����ϱ�
	/*for (int i = 1; i <= 5; i++)
	{
		printf("%d",i);
	}*/

	// for (int i = 5; i >= 1; i--)
	//{
	//	printf("%d", i);
	//}

	// 1~10 ������ ��
	
	/*int value = 0;
	
		for (int i = 1; i <= 10; i++)
		{
			value = value + i;
		}
	
		printf("value�� �� : %d\n", value);*/
#pragma endregion



#pragma endregion




#pragma endregion

}