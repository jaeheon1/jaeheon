#pragma once
#include<iostream>
#include<list>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<vector>
using namespace std;

int value = 5;

int main()
{
	/*Node node1;
	Node node2;
	Node node3;


	node1.value = 10;
	node2.value = 20;
	node3.value = 30;

	node1.ptr = &node2;
	node2.ptr = &node3;

	//[node1] ptr--->[node] (value)--->[node3] (value)

	cout << node1.ptr->ptr->value << endl;
	*/

	// Vector : 동적으로 확장과 축소가 가능한 컨테이너입니다./연속적인 메모리 공간을 가지고 있습니다. 

	//List Container
	//노드 기반으로 연결될 메모리 공간입니다.데이터와포인터를 가지고 한줄로 연결될 방식의 컨테이너입니다.
	// 런타임에 컨테이너의 크기를 가변적으로 변경이 가능합니다.
	// push_back 을 맨뒤에 하게되면 앞에서 부터 순차적으로 비교하면서 온다
	// 	   sort (순차적으로 나옴) reverse(반대로 나옴)
	//[] [] [] []
	//    []     []
	//[]      []

	/*std::list<int>value ;



	value.push_back(1012);
	value.push_back(210);
	value.push_back(304);
	value.push_back(40);
	//value.push_front(50); // 어떤 숫자던 맨 처음 오게 한다.
	for (auto& Element : value)
	{
		std::cout << Element << " ";
	}
	  // 오름차순으로 자동 정렬
	srand(time(NULL));
		int variable = 0;

	while (1)
	{

		int key = _getch();

		switch (key)
		{
		case 32:variable = rand() % 100;
			value.push_back(variable);
			break;
		}
		system("cls");
		value.sort();

		for (auto& Element : value)
		{
			std::cout << Element << " ";
		}
	}
	*/

	//반복자
	//데이터 컨테이너의 요소를 가리키는 포인터입니다. 
	/*int array[5] = { 0,1,2,3,4 };
	cout << &array[0] << endl;
	cout << array[0] << endl;
	cout << &array[0]+1 << endl;
	cout << array[0] + 1 << endl;

	vector<int> Score;

	Score.push_back(5);
	Score.push_back(10);
	Score.push_back(15);

	//반복자가 현재 가리키는 iter는 score.begin(vector의 시작 주소를 가리킵니다.)
	//[5] [10] [15]
	//iter++
	for (vector<int>::iterator iter = Score.begin(); iter != Score.end(); iter++)
	{
		std::cout << &iter<< std::endl;
		std::cout << *iter <<std::endl;
	}*/

	/*int value = 100;

	// 전역변수와 지역 변수의 이름이 같을 때 변수를 출력하게 되면 지역변수가 우선순위를 가지므로 지역 변수만 출력합니다. 
	// 하지만 ,:: 범위 지정 연산자를 사용하여 전역 변수를 명시적으로 설정할 수 있습니다. 
	std::cout << value << std::endl;
	std::cout << ::value << std::endl;


	return 0;*/
}