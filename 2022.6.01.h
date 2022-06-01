#pragma once
#include<iostream>
using namespace std;

class SuperPopup
{
public:
	SuperPopup()
	{
		cout << "Super Popup Create" << endl;
	}
	virtual~SuperPopup()
	{
		cout << "Super Popup Delate" << endl;
	}
};
class ChildPopup : public SuperPopup
{
public:
	ChildPopup()
	{
		cout << "Child Popup Create" << endl;
	}
	~ChildPopup()
	{
		cout << "Child Popup Delate" << endl;
	}
};

class Speaker
{
private:
	int volume = 10;
public:
	Speaker() {};
	Speaker(int volume)
	{
		this->volume = volume;
		cout << this->volume << endl;
	}
	void Sound()
	{
		cout << "출력" << endl;
	}
};

class Mouse
{
private:
	float Sensor;
public:
	Mouse() {};
	Mouse(float Sensor)
	{
		this->Sensor = Sensor;
		cout << this->Sensor << endl;
	}
	void Click()
	{
		cout << "클릭" << endl;
	}
};


class Computer :public Mouse, public Speaker
{
public:
	Computer(float mouse, int speaker) :Mouse(mouse), Speaker(speaker)
	{

	}

};

int main()
{
	/*
	//A(상위) 클래스 {virtual Sound 함수(울음소리) }
	//B(하위) 클래스 : public A
	//Sound {멍멍}
	//A->B
	//A->Sound()


												//     [    ]   ------->  [      ]
	//상속되어 있는 객체를 생성할 때 생성자의 순서 ->( 상위 클래스 생성자 ~ 하위 클래스 생성자)
	//소멸자는 하위 클래스의 소멸자 - 상위 클래스의 소멸자로 해제 되어야합니다.
	*/

	//가상 소멸자
	/*
	ChildPopup * ptr = new ChildPopup;
	SuperPopup * base = ptr;

	delete base;
	*/

	//다중 상속 
	//Computer Mac(10,5.5);


	//클래스 두 개의 맴버가 함수의 이름이 같을때 범위 지정 연산자를 사용해서 구분해주셔야합니다.
	/*
	Mac.Mouse::Click();
	Mac.Speaker::Click();
	*/


	//나머지로 떨어진 수의 갯수 구하기
	//두 자연수 A와 B 가 있을때 a%b 나눈 나머지 입니다.
	//7,14,27,38 %3(1,2,0,2)-> 0,1,2=3

		//int를 10개 입력 받은 뒤 이를 42로 나눈나머지를 구합니다.
		// 그 다음 서로 다른 값이 몇개 있는지 구하는 프로그램입니다.

		//1~10 -10개
		//1,2,3,4,5,6,7,8,9,10 


	//나머지로 떨어진 수의 갯수 구하기
	/*
	int array[10] = { 0, };
	int number = 0;
	int value;

	for (int i = 0; i <sizeof(array)/sizeof(int); i++)
	{
		cin >> value;
		array[i]==value;
	}

	for (int i = 0; i <sizeof(array)/sizeof(int); i++)
	{

		array[i]=value%42;
		if (array[i] == array[i])
		{

		}
		else if (array[i] != array[i])
		{
			number++;
		}


	}

	cout << number << endl;
	*/
	return 0;
}