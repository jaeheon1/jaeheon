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
			arrow.push_back("��");
			break;
		case 1:arrow.push_back("��");
			break;
		case 2:arrow.push_back("��");
			break;
		case 3:arrow.push_back("��");
			break;
		case 4:arrow.push_back("��");
			break;
		}

	}
}

int main()
{
	static int stage = 5;

	// �����̳ʿ� int () ���� 
	//std::vector<int> value = { 10,20,30,40,51,2,3,4,45,5};
	//std::vector<std::string>arrow = { "��","��","��","��" };
	srand((unsigned int)time(NULL));

	//     vector
	// 	   stack------->heap
	// 	   ���ʹ� �ϳ��� �������� �����̵�
	// 	   �迭�� ���� 
	// 	   0     1    2        4     ����:(0)1
	// 	   [1]  [2]  [3]  []  [5]   ���԰� ������ ����� :0(n)


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
	// [10]  [20]  [30]  [40]  pop back�� �Ҽ��� �ϳ��� �پ���.
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
			arrow.push_back("��");
			break;
		case 1:arrow.push_back("��");
			break;
		case 2:arrow.push_back("��");
			break;
		case 3:arrow.push_back("��");
			break;

		}

	}
	while (1)
	{
		//vector �����̳ʿ� 5���� �����͸� �����մϴ�. 
		// �������� "��","��","��","��" �����͸� vector �����̳ʿ� �־��ݴϴ�.
		// ���� �ε������� ���� ���ϴ� ȭ��ǥ����Ÿ������ �ش� ȭ��ǥ�� ������ ������ �Ƿε� �����մϴ�.
		//vector �����̳��� ũ�Ⱑ 8�̸� ������ ����ǵ����մϴ�.
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
			if (arrow.back() == "��")
				arrow.pop_back();
			else life--;
			break;
		case 75:if (arrow.back() == "��")
			arrow.pop_back();
			   else life--;
			break;
		case 77:if (arrow.back() == "��")
			arrow.pop_back();
			   else life--;
			break;
		case 80:if (arrow.back() == "��")
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
			std::cout << "������ �Ϸ����� ���ؼ� �����Ͽ����ϴ�.";
		}
		if (stage == 10)
		{
			system("cls");
			std::cout << "������ ���������� �Ϸ��Ͽ����ϴ�.";
		}



	}



	//std::cout << value[1] << std::endl;

	//�迭 
	//������ ������ �迭�� ũ�Ⱑ �������ϴ� 
	// [10] [5] [7] [8] [1]
	// [/] [/] [/] [/]

	return 0;
}