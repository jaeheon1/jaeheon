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
		cout << "���" << endl;
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
		cout << "Ŭ��" << endl;
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
	//A(����) Ŭ���� {virtual Sound �Լ�(�����Ҹ�) }
	//B(����) Ŭ���� : public A
	//Sound {�۸�}
	//A->B
	//A->Sound()


												//     [    ]   ------->  [      ]
	//��ӵǾ� �ִ� ��ü�� ������ �� �������� ���� ->( ���� Ŭ���� ������ ~ ���� Ŭ���� ������)
	//�Ҹ��ڴ� ���� Ŭ������ �Ҹ��� - ���� Ŭ������ �Ҹ��ڷ� ���� �Ǿ���մϴ�.
	*/

	//���� �Ҹ���
	/*
	ChildPopup * ptr = new ChildPopup;
	SuperPopup * base = ptr;

	delete base;
	*/

	//���� ��� 
	//Computer Mac(10,5.5);


	//Ŭ���� �� ���� �ɹ��� �Լ��� �̸��� ������ ���� ���� �����ڸ� ����ؼ� �������ּž��մϴ�.
	/*
	Mac.Mouse::Click();
	Mac.Speaker::Click();
	*/


	//�������� ������ ���� ���� ���ϱ�
	//�� �ڿ��� A�� B �� ������ a%b ���� ������ �Դϴ�.
	//7,14,27,38 %3(1,2,0,2)-> 0,1,2=3

		//int�� 10�� �Է� ���� �� �̸� 42�� ������������ ���մϴ�.
		// �� ���� ���� �ٸ� ���� � �ִ��� ���ϴ� ���α׷��Դϴ�.

		//1~10 -10��
		//1,2,3,4,5,6,7,8,9,10 


	//�������� ������ ���� ���� ���ϱ�
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