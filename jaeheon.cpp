#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<ctime>

using namespace std;

static int ScreenIndex;
static HANDLE Screen[2];
int FPS;
clock_t CurTime, OldTime;
char *FPS_TEXT;

void Screen_Init()
{
	CONSOLE_CURSOR_INFO cursor;

	//화면 2개를 생성합니다.
	Screen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	Screen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);


		//커서 숨기기 
		cursor.dwSize = 1;
		SetConsoleCursorInfo(Screen[0], &cursor);
		SetConsoleCursorInfo(Screen[1], &cursor);

}

void ScreenFlipping()
{
	SetConsoleActiveScreenBuffer(Screen[ScreenIndex]);
	ScreenIndex = !ScreenIndex;
}

void ScreenClear()
{
	COORD Coord = { 0,0 };
    DWORD dw;
	FillConsoleOutputCharacter(Screen[ScreenIndex], ' ', 80 * 25, Coord, &dw);
}
void ScreenRelese()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
	
}
void ScreenPrint(int x, int y, const char* string)
{
	DWORD dw;
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition);
	WriteFile(Screen[ScreenIndex], string, strlen(string), &dw, NULL);

}
void Render()
{
	ScreenClear();

	if (CurTime - OldTime >= 1000)
	{
		sprintf(FPS_TEXT, "FPS: %d", FPS);
		OldTime = CurTime;
		FPS = 0;
	}
	FPS++;
	//ScreenPrint(0, 0, FPS_TEXT);
	ScreenFlipping();
}
void Release() {
	delete[] FPS_TEXT;
}



  /*void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}*/

int x = 5, y = 5;

int main()
{
	//지렁이 게임
	/*
	//지렁이 게임 
	//[1] [2] 
	//Left Right Up Right
	//별 아이템이 랜덤으로 주어진다
	//별과 충돌을 하게 되면 몸채가 늘어나게 됩니다.
	//충돌()
	// 	   지렁이 몸체 
	// 	   Level(1) 몸체가 5개가 되면 clear
	// 	   Level(2) 몸체가 7개가 되면 clear
	// 	   Level(3) 몸체가 8개가 되면 clear
	// 	   양식장 안에서 별 아이템이 랜덤으로 생성되어야합니다.
	// 	 양식장과 충돌하게 되면 게임 오버가 되면서 게임이 초기화 합니ㅏㄷ. 
	//[1] [2] [3]

	*/

	
	int width = 1;
	int move = 1;


	//그렸다가 지웠다가 반복 
	//[/////////]->[      ]->[////////]
	//             []
	

	while (1)
	{

		ScreenClear();
		ScreenPrint(x, y, "■");
	
		//std::cout << "◆" << std::endl;
		if (width == false)
		{

		}
		Render();
		
		switch (move)
		{
		case 1:
			x++;
			Sleep(100);
			break;
		case 2:
			x--;
			Sleep(100);

			break;
		case 3:
			y--;
			Sleep(100);

			break;
		case 4:
			y++;
			Sleep(100);

			break;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			move = 1;
			
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			move = 2;

			
		}
		if (GetAsyncKeyState(VK_UP))
		{
			move = 3;

		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			move = 4;

		}
	}
	

	FPS = 0;
	FPS_TEXT = new char[128];
	memset(FPS_TEXT, '\0', 128);
	Screen_Init();

	
	//OldTime = clock();  // 시간을 측정합니다. 1 초 마다 갱신합니다. 

	
	Release();
	ScreenRelese();
}