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

	// Vector : �������� Ȯ��� ��Ұ� ������ �����̳��Դϴ�./�������� �޸� ������ ������ �ֽ��ϴ�. 

	//List Container
	//��� ������� ����� �޸� �����Դϴ�.�����Ϳ������͸� ������ ���ٷ� ����� ����� �����̳��Դϴ�.
	// ��Ÿ�ӿ� �����̳��� ũ�⸦ ���������� ������ �����մϴ�.
	// push_back �� �ǵڿ� �ϰԵǸ� �տ��� ���� ���������� ���ϸ鼭 �´�
	// 	   sort (���������� ����) reverse(�ݴ�� ����)
	//[] [] [] []
	//    []     []
	//[]      []

	/*std::list<int>value ;



	value.push_back(1012);
	value.push_back(210);
	value.push_back(304);
	value.push_back(40);
	//value.push_front(50); // � ���ڴ� �� ó�� ���� �Ѵ�.
	for (auto& Element : value)
	{
		std::cout << Element << " ";
	}
	  // ������������ �ڵ� ����
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

	//�ݺ���
	//������ �����̳��� ��Ҹ� ����Ű�� �������Դϴ�. 
	/*int array[5] = { 0,1,2,3,4 };
	cout << &array[0] << endl;
	cout << array[0] << endl;
	cout << &array[0]+1 << endl;
	cout << array[0] + 1 << endl;

	vector<int> Score;

	Score.push_back(5);
	Score.push_back(10);
	Score.push_back(15);

	//�ݺ��ڰ� ���� ����Ű�� iter�� score.begin(vector�� ���� �ּҸ� ����ŵ�ϴ�.)
	//[5] [10] [15]
	//iter++
	for (vector<int>::iterator iter = Score.begin(); iter != Score.end(); iter++)
	{
		std::cout << &iter<< std::endl;
		std::cout << *iter <<std::endl;
	}*/

	/*int value = 100;

	// ���������� ���� ������ �̸��� ���� �� ������ ����ϰ� �Ǹ� ���������� �켱������ �����Ƿ� ���� ������ ����մϴ�. 
	// ������ ,:: ���� ���� �����ڸ� ����Ͽ� ���� ������ ��������� ������ �� �ֽ��ϴ�. 
	std::cout << value << std::endl;
	std::cout << ::value << std::endl;


	return 0;*/
}