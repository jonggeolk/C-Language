#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// ������ ũ��
int width = 100;
int height = 60;

// ���۸� �����մϴ�.
HANDLE screen[2];
// screen[0] front buffer
// screen[1] back buffer

// HANDLE �ε����� �����ؼ� ���۸� ��ü��Ű�� ����
int screenIndex = 0;

void GotoXY(int x, int y)
{
    // x, y ��ǥ ����
    COORD position = { x, y };

    // Ŀ�� �̵� �Լ�
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// ���۸� �ʱ�ȭ�ϴ� �Լ�
void ScreenInit()
{
    CONSOLE_CURSOR_INFO cursor;

    // ������ ���� ������, ���� ������
    COORD size = { width, height };

    // left, top, right, bottom
    SMALL_RECT rect{ 0,0, width - 1, height - 1 };

    // ȭ�� 2���� �����մϴ�.
    // front buffer
    screen[0] = CreateConsoleScreenBuffer
    (
        GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL,
        CONSOLE_TEXTMODE_BUFFER,
        NULL
    );

    // ������ ����� �����ϴ� �Լ�
    SetConsoleScreenBufferSize(screen[0], size);

    SetConsoleWindowInfo(screen[0], TRUE, &rect);

    // back buffer
    screen[1] = CreateConsoleScreenBuffer
    (
        GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL,
        CONSOLE_TEXTMODE_BUFFER,
        NULL
    );

    // ������ ����� �����ϴ� �Լ�
    SetConsoleScreenBufferSize(screen[1], size);

    SetConsoleWindowInfo(screen[1], TRUE, &rect);

    // Ŀ���� Ȱ��ȭ ����
    // false : ���� (0)
    // true  : �� (1)

    cursor.bVisible = false;

    SetConsoleCursorInfo(screen[0], &cursor);
    SetConsoleCursorInfo(screen[1], &cursor);
}

int main()
{

    return 0;
}