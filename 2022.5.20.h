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

// �ζ��� �Լ�

/*
inline void Function(int x)
{
	std::cout << "x�� ��" <<x<<std::endl;
}
*/


int main()
{
	//�ζ��� �Լ� 

	/*
	Function(1);
	*/




	//Ŭ���� �ܺ� �Լ�

	/*Animal cat;
	cat.Sleeping();
	cat.Sound();
	*/

	//�ɹ� �ʱ�ȭ ����Ʈ

	/*Shape rectangle(10000,"Circle");

	//�Է��� �ް� ���׼����� �Ǻ�*/

	//���׼� ���ϱ�

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
		cout << "���׼�" << endl;

	}
	else
	{
		cout << "������" << endl;
	}
	if (result == value)
	{
		cout << "������"<<endl;
	}*/


	//������
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
		cout << "������" << endl;
	}
	else
	{
		cout << "�������� �ƴմϴ�." << endl;
	}
	*/
	return 0;
}