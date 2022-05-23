#include<iostream>
#include"Object.h"
#include<vector>
#include<conio.h>
#include<windows.h>
using namespace std;




int main()
{
	//this 포인터
	/*Object computer(10,20,30);
	Object Phone(5, 10, 15);


	

	computer.Address();
	Phone.Address();*/
	

	//standard template library 

	//반복자

	// 컨테이너에 저장된 원소를 순회하고 접근하는 스마트 포인터 입니다. 

	//vecter container

	// 컨테이너에 int () 선언 
	//std::vector<int> value = { 10,20,30,40,51,2,3,4,45,5};
	std::vector<std::string>arrow = { "←","→","↑","↓" };
	//     vector
	// 	   stack------->heap
	// 	   벡터는 하나가 없어져도 정렬이됨
	// 	   배열의 장점 
	// 	   0     1    2        4     접근:(0)1
	// 	   [1]  [2]  [3]  []  [5]   삽입과 삭제가 어려움 :0(n)


	 
	
	
	//[10,50           ] <-push_back

	//value.push_back(10);
	//value.push_back(20);
	//value.push_back(30);
	//value.push_back(40);
	//value.push_back(50);

	// [10]  [20]  [30]  [40]  [50]

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

	while (1)
	{
		//[] [] [] [] []
		for (auto Element : arrow)
		{
			std::cout << Element << "  ";
		}
		int key = _getch();
		if (arrow.size() == 0)
		{
			break;
		}
		system("cls");
		switch (key)
		{
		case 32:
			arrow.pop_back();
			break;
		case 77:
			arrow.push_back("←");
			break;
		case 80:
			arrow.push_back("→");
			break;
		}
		


		

	}



	//std::cout << value[1] << std::endl;

	//배열 
	//컴파일 시점에 배열의 크기가 정해집니다 
	// [10] [5] [7] [8] [1]
	// [/] [/] [/] [/]
	
	return 0;
}