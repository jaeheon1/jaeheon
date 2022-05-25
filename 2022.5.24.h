#pragma once
#include<iostream>
#include"Object.h"
#include<vector>
#include<conio.h>
#include<windows.h>
#include<time.h>

using namespace std;

std::vector<std::string>arrow;

int life = 10;



void nextstage()
{
	int value = 0;

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
		case 4:arrow.push_back("↓");
			break;
		}

	}
}

int main()
{
	static int stage = 5;

	// 컨테이너에 int () 선언 
	//std::vector<int> value = { 10,20,30,40,51,2,3,4,45,5};
	//std::vector<std::string>arrow = { "←","→","↑","↓" };
	srand((unsigned int)time(NULL));

	//     vector
	// 	   stack------->heap
	// 	   벡터는 하나가 없어져도 정렬이됨
	// 	   배열의 장점 
	// 	   0     1    2        4     접근:(0)1
	// 	   [1]  [2]  [3]  []  [5]   삽입과 삭제가 어려움 :0(n)


	//value.push_back(10);
	//value.push_back(20);
	//value.push_back(30);
	//value.push_back(40);
	//value.push_back(50);



	/*for (auto Element : value)
	{
		std::cout << Element << std::endl;
	}
	value.pop_back();

	std::cout << value.size()<<std::endl;
	// [10]  [20]  [30]  [40]  pop back을 할수록 하나씩 줄어든다.
	for (auto Element : value)
	{
		std::cout << Element << std::endl;
	}

	for (int i = 0; i < value.size(); i++)
	{
		std::cout <<&value[i] << std::endl;
	}*/

	nextstage();
	int value = 0;

	std::vector<std::string>arrow;


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
		//vector 컨테이너에 5개의 데이터를 저장합니다. 
		// 랜덤으로 "←","→","↑","↓" 데이터를 vector 컨데이너에 넣어줍니다.
		// 현재 인덱스에서 내가 원하는 화살표가나타났을대 해당 화살표를 누르면 삭제가 되로독 설정합니다.
		//vector 컨테이너의 크기가 8이면 게임이 종료되도록합니다.
		int life = 10;
		std::cout << "life: " << life << std::endl;
		srand((unsigned int)time(NULL));
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
			std::cout << "게임을 완료하지 못해서 종료하였습니다.";
		}
		if (stage == 10)
		{
			system("cls");
			std::cout << "게임을 정상적으로 완료하였습니다.";
		}



	}



	//std::cout << value[1] << std::endl;

	//배열 
	//컴파일 시점에 배열의 크기가 정해집니다 
	// [10] [5] [7] [8] [1]
	// [/] [/] [/] [/]

	return 0;
}