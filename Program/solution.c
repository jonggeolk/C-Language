#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];

void CreateMaze()
{
	// 0 : ����� (" ")
	// 1 : �� (��)
	// 2 : Ż�ⱸ (��)
	
	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1100111101");
	strcpy(maze[2], "1110111001");
	strcpy(maze[3], "1110011011");
	strcpy(maze[4], "1111010011");
	strcpy(maze[5], "1100000111");
	strcpy(maze[6], "1101111111");
	strcpy(maze[7], "1100000111");
	strcpy(maze[8], "1111110111");
	strcpy(maze[9], "1110000111");
	strcpy(maze[10], "1110011111");
}

void Render()
{
	
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
//	// ù ��° �Ű�����
//	// ������� ���� �迭�� �־� �ݴϴ�.
//
//	// �� ��° �Ű�����
//	// �����ų ���ڿ��� �־��ݴϴ�.
//
//	strcpy(student.name, "KIM");
//
//	printf("student.name�� �� : %s\n", student.name);
//	
//	strcpy(student.name, "G");
//
//	printf("student.name�� �� : %s\n", student.name);
//
//	return 0;
//}
int main()
{
	int i = 0, j = 0;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
			printf("maze[%c][%c] = %c\n", i, j, maze[i][j]);
			printf("\n");
	}
	//for (int i = 0; i < 11; i++)
	//{
	//	for (int j = 0; j < 11; j++)
	//	{
	//		printf("maze[%c][%c] = %c\n", i, j, maze[i][j]);
	//	}
	//	return 0;
	//}
}