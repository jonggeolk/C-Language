#include <stdio.h>

void Instaniate()
{
    printf("Instaniate\n");
}

int Factorial(int x)
{
    //if (x == 0 || x == 1) return 1;
    //return x*Factorial(x-1);  <-이건 구글링 대입

    //if (x < 0)
    //{
    //    printf("예기치 못한 값이 들어왔습니다.\n");
    //    exit(1);
    //}   <-밑에 내용 포함
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
#pragma region 함수 포인터
    // 함수의 주소값을 저장하고 가리킬 수 있는 포인터 변수입니다.

    // 반환값과 매개 변수가 없는 함수 포인터를 선언합니다.
    // void (*ptr) ();

    //int (*iptr) (int);
    // ptr 변수에 Instaniate 함수의 주소를 저장합니다.
    // ptr = Instaniate;

    // 함수 포인터를 호출합니다.
    //ptr();

    //iptr = Factorial;
    //
    //int number = 0;
    //
    //scanf_s("%d", &number);

    //printf("%d 의 ! : %d", number, iptr(number)); <-강의 내용

    //printf("3!의 값 : %d \n", iptr(3));
    //printf("4!의 값 : %d \n", iptr(4));
    //printf("5!의 값 : %d \n", iptr(5));
    //printf("12!의 값 : %d \n", iptr(12));
    //printf("30!의 값 : %d \n", iptr(30));    <- 재귀함수 구글링 대입

    //함수 포인터는 함수의 반환형과 매개 변수의 타입이 일치해야 하며,
    // 함수 포인터를 사용하여 동적으로 메모리를 할달할 수 없습니다.

#pragma endregion

#pragma region 이중 포인터

    //int data = 100;

    //int * sptr = &data;

    //int ** dptr = &sptr;

    //printf("*sptr의 값 :%d\n", *sptr);
    //printf("*dptr의 주소값 :%p\n", *dptr);

    //**dptr = 999;

    //printf("*data의 값 :%d\n", data);



#pragma endregion

    return 0;
}

