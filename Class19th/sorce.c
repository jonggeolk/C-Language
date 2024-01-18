#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 11
#define HEIGHT 11

void GotoXY(int x, int y)
{
    // x, y 좌표 설정
    COORD position = { x, y };

    // 커서 이동 함수
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


char maze[WIDTH][HEIGHT];

typedef struct Player
{
    int x;
    int y;
    const char* shape;
}Player;

void CreateMaze()
{
    // 0 : 빈공간 (" ")
    // 1 : 볌 (▨)
    // 2 : 탈출구 (◎)
    // 3 : 출발지점 (☞)

    strcpy(maze[0], "1111111111");
    strcpy(maze[1], "1130111101");
    strcpy(maze[2], "1110111001");
    strcpy(maze[3], "1110011011");
    strcpy(maze[4], "1111010001");
    strcpy(maze[5], "1100000101");
    strcpy(maze[6], "1101111101");
    strcpy(maze[7], "1100000101");
    strcpy(maze[8], "1111110101");
    strcpy(maze[9], "1200000111");
    strcpy(maze[10], "1111111111");
}

void Render()
{
    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            //printf("%c", maze[i][j]);
            if (maze[i][j] == '0')
            {
                printf("  ");
            }
            else if (maze[i][j] == '1')
            {
                printf("▨");
            }
            else if (maze[i][j] == '2')
            {
                printf("◎");
            }
            else if (maze[i][j] == '3')
            {
                printf("☞");
            }
        }
        printf("\n");

    }

}

void keyboard(char map[WIDTH][HEIGHT], Player* player)
{
    char key = 0;

    if (_kbhit()) // 키보드 입력 확인 (true/false)
    {
        key = _getch(); // key 입력을 받아주는 함수

        system("cls");

        if (key == -32)
        {
            key = _getch();
        }

      switch (key)
      {
        case UP: if (maze[player->y - 1][player->x / 2] != '1')
        
         {    
            player->y--;
         }
               break;
        case LEFT:if (maze[player->y][player->x / 2 - 1] != '1')
         {
            player->x -= 2;
         }

                 break;
        case RIGHT:if (maze[player->y][player->x / 2 + 1] != '1')
         {
            player->x += 2;
         }
                  break;
        case DOWN:if (maze[player->y + 1][player->x / 2] != '1')
         {
            player->y++;
         }
                 break;   
      }


    //typedef struct student
    //{
    //	char name[10];
    //}student;
    //int main()
    //{
    //	student student;
    //
    //	student.name;
    //	// 첫 번째 매개변수
    //	// 복사받을 문자 배열을 넣어 줍니다.
    //
    //	// 두 번째 매개변수
    //	// 복사시킬 문자열을 넣어줍니다.
    //
    //	strcpy(student.name, "KIM");
    //
    //	printf("student.name의 값 : %s\n", student.name);
    //	
    //	strcpy(student.name, "G");
    //
    //	printf("student.name의 값 : %s\n", student.name);
    //
    //	return 0;
    //}
        int main()
    {
        
            Player player = { 4,1,"★" };
        
    

        // 1.맵 데이터를 생성합니다.
        CreateMaze();

        while (1)
        {

           //2. 뱁 데이터에 있는 정보를 토대로 출력합니다.
            Render();

            keyboard(maze, &player);

            GotoXY(player.x, player.y);
            printf("%s", player.shape);

            Sleep(100);
            system("cls");


          
        }
        return 0;
        
    }