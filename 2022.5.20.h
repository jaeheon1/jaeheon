#pragma once
#include<iostream>
#include"Shape.h"

using namespace std;

class Animal
{
public:
	void Sound();
	void Sleeping();

private:
	int m_size;
	float m_weight;
	std::string m_name;

};

void Animal::Sound()
{
	cout << "Sound" << endl;
}

void Animal::Sleeping()
{
	cout << "Sleeping" << endl;
}

// 인라인 함수

/*
inline void Function(int x)
{
	std::cout << "x의 값" <<x<<std::endl;
}
*/


int main()
{
	//인라인 함수 

	/*
	Function(1);
	*/




	//클래스 외부 함수

	/*Animal cat;
	cat.Sleeping();
	cat.Sound();
	*/

	//맴버 초기화 리스트

	/*Shape rectangle(10000,"Circle");

	//입력을 받고 과잉수인지 판별*/

	//과잉수 구하기

	/*int value;
	int result=0;
	cin >> value;

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			result += i;
		}
	}
	if (result > value)
	{
		cout << "과잉수" << endl;

	}
	else
	{
		cout << "부족수" << endl;
	}
	if (result == value)
	{
		cout << "완전수"<<endl;
	}*/


	//부족수
	/*
	int value;
	int result=0;

	cin >> value;

	for (int i =1; i <= value; i++)
	{
		if (value % i == 0)
		{
			result += i;
		}
	}
	if (result < value*2)
	{
		cout << "부족수" << endl;
	}
	else
	{
		cout << "부족수가 아닙니다." << endl;
	}
	*/
	return 0;
}