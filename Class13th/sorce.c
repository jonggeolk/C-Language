#include <stdio.h>

void Instaniate()
{
    printf("Instaniate\n");
}

int Factorial(int x)
{
    //if (x == 0 || x == 1) return 1;
    //return x*Factorial(x-1);  <-�̰� ���۸� ����

    //if (x < 0)
    //{
    //    printf("����ġ ���� ���� ���Խ��ϴ�.\n");
    //    exit(1);
    //}   <-�ؿ� ���� ����
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * Factorial(x - 1);
    }
}


int main()
{
#pragma region �Լ� ������
    // �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� ������ �����Դϴ�.

    // ��ȯ���� �Ű� ������ ���� �Լ� �����͸� �����մϴ�.
    // void (*ptr) ();

    //int (*iptr) (int);
    // ptr ������ Instaniate �Լ��� �ּҸ� �����մϴ�.
    // ptr = Instaniate;

    // �Լ� �����͸� ȣ���մϴ�.
    //ptr();

    //iptr = Factorial;
    //
    //int number = 0;
    //
    //scanf_s("%d", &number);

    //printf("%d �� ! : %d", number, iptr(number)); <-���� ����

    //printf("3!�� �� : %d \n", iptr(3));
    //printf("4!�� �� : %d \n", iptr(4));
    //printf("5!�� �� : %d \n", iptr(5));
    //printf("12!�� �� : %d \n", iptr(12));
    //printf("30!�� �� : %d \n", iptr(30));    <- ����Լ� ���۸� ����

    //�Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� ��ġ�ؾ� �ϸ�,
    // �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.

#pragma endregion

#pragma region ���� ������

    //int data = 100;

    //int * sptr = &data;

    //int ** dptr = &sptr;

    //printf("*sptr�� �� :%d\n", *sptr);
    //printf("*dptr�� �ּҰ� :%p\n", *dptr);

    //**dptr = 999;

    //printf("*data�� �� :%d\n", data);



#pragma endregion

    return 0;
}

