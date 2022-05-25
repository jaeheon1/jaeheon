#include<iostream>
#include"Object.h"
#include<vector>
#include<conio.h>
#include<windows.h>
#include<time.h>

using namespace std;

std::vector<std::string>arrow;



static int stage = 5;
int value = 0;
void nextstage()
{
	
	srand(time(NULL));
	for (int i = 0; i < stage; i++)
	{
		value = rand() % 4;
		switch (value)
		{
		case 0:
			arrow.push_back("←");
			break;
		case 1:arrow.push_back("→");
			break;
		case 2:arrow.push_back("↑");
			break;
		case 3:arrow.push_back("↓");
			break;
		
		}

	}
}

int main()
{
	

	int life = 10;

	


	nextstage();
	
	
	


	for (int i = 0; i < 5; i++)
	{
		value = rand() % 4;
		switch (value)
		{
		case 0:
			arrow.push_back("←");
			break;
		case 1:arrow.push_back("→");
			break;
		case 2:arrow.push_back("↑");
			break;
		case 3:arrow.push_back("↓");
			break;
			
		}

	}
	while (1)
	{
	
		int life = 10;

		std::cout << "life: " <<life<< std::endl;
		
		for (auto Element : arrow)
		{
			
			std::cout << Element << "  ";
		}
		

		int key = _getch();
		if (arrow.size() == 0)
		{
			stage++;
			nextstage();
		}
		system("cls");
		
		switch (key)
		{
		case 72:
			if (arrow.back() == "↑")
				arrow.pop_back();
			else life--;
			break;
		case 75:if (arrow.back() == "←")
			arrow.pop_back();
			   else life--;
			break;
		case 77:if (arrow.back() == "→")
			arrow.pop_back();
			   else life--;
			break;
		case 80:if (arrow.back() == "↓")
			arrow.pop_back();
			   else life--;
			break;
		case 32:
			arrow.pop_back();
			break;
		}
		if (life == 0)
		{
			system("cls");
			std::cout<<"게임을 완료하지 못해서 종료하였습니다.";
	     }
		if (stage == 10)
		{
			system("cls");
			std::cout << "게임을 정상적으로 완료하였습니다.";
		}

		

	}




	
	return 0;
}