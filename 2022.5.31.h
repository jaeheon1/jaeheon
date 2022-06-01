#pragma once
#include<iostream>
#include<string>
using namespace std;

//�Ϲ� �����Լ�
class Pen
{
	//���� �����Լ�
	virtual void Drawing() = 0;

};
class Circle :public Pen
{
public:
	void Drawing()
	{
		cout << "���׶��" << endl;
	}
};
class Star :public Pen
{
public:
	void Drawing()
	{
		cout << "��" << endl;
	}
};
class Rectangle :public Pen
{
public:
	void Drawing()
	{
		cout << "����" << endl;
	}

};


//�Ϲ� �����Լ�
class Animal
{
public:
	virtual void Sound()
	{
		cout << "�����Ҹ�~" << endl;
	}



private:

	int mouth;
	int eye;
	int leg;

};
class dog :public Animal
{
public:
	//�����Լ�(virtual)
	void Sound()
	{
		cout << "�۸�" << endl;
	}
};
class cat :public Animal
{
public:
	void Sound()
	{
		cout << "�Ŀ�~" << endl;
	}
};
class duck :public Animal
{
public:
	void Sound()
	{
		cout << "�в�~" << endl;
	}
};




int main()
{
	/*
	//������ �����ϰ� , �Լ����� �����ε� �����߾��.
	// ���� �̸��� �Լ��� ���� �� ���� �� �� �־��. (�Ű� ���� �ڷ����̳� ������ ���� �Լ��� �����ε��� �Ҽ� �־����. )

	//Function(int x) ----- > ����
	//Function(char x)------����
	//Function(double x)   ----�Ǽ�
	*/
	//������ 

	//[] animal 

	// [] [] []

	// dog cat duck 

	//�����Լ� 
	/*
	Animal *animal=new Animal;
	dog* ldog = new dog;
	duck* nduck = new duck;
	animal->Sound();
	animal = ldog;
	animal->Sound();
	animal = nduck;
	animal->Sound();

	cout << &animal << endl;
	//�����Ϸ��� �Լ��� ȣ���� �� ������ ������ �ֱ� ������ �Լ��� ȣ���ϴ� �ڵ��
	//������ ������ ������ �޸� �ּҷ� ��ȯ��ŵ�ϴ�.(���� ���ε�)

	//���� ���ε�: ������ ������ �Լ��� �����մϴ�.
	//���� ���ε� :��Ÿ�� ������ �Լ��� �����մϴ�.
	*/

	//���� ���� �Լ�
	//���� Ŭ���� �ݵ�� ������ �Ǿ�� �ϴ� �ɹ� �Լ� 

	/*
	Star* star = new Star;
	star->Drawing();

	Rectangle *rectangle = new Rectangle;
	rectangle->Drawing();

	Circle* circle = new Circle;
	circle->Drawing();
	*/


	//���α׷��ӽ� 2~3 �ܰ�(ȸ�� �ڵ��׽�Ʈ���̵��� 2~3) (4 �ܰ�)
	//�Ϻ��� ���ڿ� �Ǻ��ϱ�

	//���ڸ� �Է��մϴ�.
	//���ڸ� �Է������� ���ڰ� ���� �Ǹ� ex)�Ϻ��� ���ڿ��� �ƴմϴ�. 
	//���ڸ� �Է� ������ ���ڰ� ���� ������ ex>�Ϻ��� ���ڿ��Դϴ�.


/*
	std::string str;
	std::getline(std::cin, str);
	int a = 0;
	int count = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] > char(48) && str[i]< char(57))
		{

			count++;
		}

	}
	if (count > 0)
	{
		cout << "�Ϻ��� ���ڿ��� �ƴմϴ�" << endl;
	}
	else
	{
		cout << "�Ϻ��� ���ڿ��� �½��ϴ�" << endl;
	}


	*/
	return 0;
}