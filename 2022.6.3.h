


/* 
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<ctime>
#include<time.h>
#define BufferWidth 88
#define BufferHeight 40

int move=1;
static int ScreenIndex;
static HANDLE Screen[2];


using namespace std;



struct obj
{
	int x; 
	int y; 
	const char* shape;
};

obj * Player;
obj * Booster;
void Screen_Init()
{
	CONSOLE_CURSOR_INFO cursor;
	COORD size = { BufferWidth,BufferHeight };
	SMALL_RECT rect = { 0,0,BufferWidth - 1,BufferHeight - 1 };

	//ȭ�� 2���� �����մϴ�.
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,FILE_SHARE_READ | FILE_SHARE_WRITE , NULL ,CONSOLE_TEXTMODE_BUFFER ,NULL
	);
	SetConsoleScreenBufferSize(Screen[0], size);
	SetConsoleWindowInfo(Screen[0], TRUE, &rect);


	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,FILE_SHARE_READ | FILE_SHARE_WRITE , NULL ,CONSOLE_TEXTMODE_BUFFER ,NULL
	);
	SetConsoleScreenBufferSize(Screen[1], size);
	SetConsoleWindowInfo(Screen[1], TRUE, &rect);

		//Ŀ�� ����� 
		cursor.dwSize = 1;
		cursor.bVisible = false;
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
	FillConsoleOutputCharacter(Screen[ScreenIndex], ' ', BufferWidth * BufferHeight, Coord, &dw);
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
	SetConsoleCursorPosition(Screen[ScreenIndex],CursorPosition);
	WriteFile(Screen[ScreenIndex], string, strlen(string), &dw, NULL);

}




  /*void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

//int x = 5, y = 5;

void PlayerInitialize()
{
	Player = (obj*)malloc(sizeof(obj));
	Player->x = 5;
	Player->y = 5;
	Player->shape = "��";

}

void BoosterInitialize()
{
	Booster = (obj*)malloc(sizeof(obj));

	Booster->x=rand() % 9 + 1;
	Booster->y=rand() % 9 + 1;
	Booster->shape = "��";
};


void Render()
{
	ScreenPrint(Player->x, Player->y, Player->shape);
	ScreenPrint(Booster->x, Booster->y, Booster->shape);
}


void KeyBored()
{
	switch (::move)
	{
	case 1:
		Player->x++;
	
		break;
	case 2:
		Player->x--;
		
		break;
	case 3:
		Player->y--;
		
		break;
	case 4:
		Player->y++;
		
		break;
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{

		Player->x++;
		::move = 1;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
	
		Player->x--;
		::move = 2;


	}
	if (GetAsyncKeyState(VK_UP))
	{
		
		Player->y--;
		::move = 3;

	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		Player->y++;
		::move = 4;

	}

}


int main()
{
	//������ ����
	/*
	//������ ���� 
	//[1] [2] 
	//Left Right Up Right
	//�� �������� �������� �־�����
	//���� �浹�� �ϰ� �Ǹ� ��ä�� �þ�� �˴ϴ�.
	//�浹()
	// 	   ������ ��ü 
	// 	   Level(1) ��ü�� 5���� �Ǹ� clear
	// 	   Level(2) ��ü�� 7���� �Ǹ� clear
	// 	   Level(3) ��ü�� 8���� �Ǹ� clear
	// 	   ����� �ȿ��� �� �������� �������� �����Ǿ���մϴ�.
	// 	 ������ �浹�ϰ� �Ǹ� ���� ������ �Ǹ鼭 ������ �ʱ�ȭ �մϤ���. 
	//[1] [2] [3]

	
	Screen_Init();
	PlayerInitialize();
	BoosterInitialize();
	int width = 1;


	//�׷ȴٰ� �����ٰ� �ݺ� 
	//[/////////]->[      ]->[////////]
	//             []
	srand(time(NULL));

	while (1)
	{
		KeyBored();
		ScreenFlipping();
		ScreenClear();
		Render();
		//ScreenPrint(Player->x, Player->y,Player->shape);
	
		//x=1, y=1 
		if (Player->x == 1 && Player->y == 1)
		{
			break;
		}
		Sleep(100);
	
		
		
		
	}
	


	
	

	
	//OldTime = clock();  // �ð��� �����մϴ�. 1 �� ���� �����մϴ�. 

	

	ScreenRelese();
} */