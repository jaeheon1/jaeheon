/*#pragma once
#include<iostream>
#include"Book.h"*/





/*class Person
{
public:
	//������ 
	Person()
	{
		std::cout << "Create Person" << std::endl;
	}

	~Person()
	{
		std::cout << "Delete Person" << std::endl;
	}

	/*void Info()
	{
		std::cout << age << std::endl;
		std::cout << weight << std::endl;
		std::cout << name << std::endl;
	}





	int age;
	float weight;
	std::string name;


};
*/

//int main()
//{

	//Book naver;

	//naver.Read();

	//naver.Write();





	//��ü �Ҵ�
	/*Person* man = new Person();

	std::cout << sizeof(Person) << std::endl;

	Person girl;
	Person �̶�� ��ü�� ������ �Ǿ���? ��

	man->age = 20;
	man->weight = 70.5;
	man->name = "kimGeumsoo";
	man->Info();

	delete man;
	*/



	// ���� �Ҵ� �迭
		/*  //4byte *5 =20 byte
			  //[] [] [] []
			  //[] [] [] []
			  //[] [] [] []
	int* ptr = new int[3];

	ptr[0] = 1000;
	ptr[1] = 2000;
	ptr[2] = 3000;

	std::cout << sizeof(ptr) << std::endl;

	for (int i = 0; i < 3;i++)
	{
		std::cout << ptr[i] << std::endl;
		std::cout << "ptr������ ����Ű�� �ּ�" << &ptr[i] << std::endl;
	}

	//���� �Ҵ��� ���� �� �迭 ���·� �޷θ��� �Ҵ��ϰ� �Ǹ� �޸𸮸� ������ �� �迭 ���·� �������־���մϴ�.


	delete []ptr;
	for (int i = 0; i < 3; i++)
	{
		std::cout << ptr[i] << std::endl;
		std::cout << "ptr������ ����Ű�� �ּ�" << &ptr[i] << std::endl;
	}

	// ����       ��
	//ptr------->
	//�̹� ������ �޸𸮸� ����Ű�� ������ �Դϴ�.*/



	//���� ������ 
	/*int variable = 300;
	int value = 10;
	int& ref = value;
	ref = variable;
	ref = 1000;

	std::cout << "value�� ���� : "<<value << std::endl;
	std::cout << variable << std::endl;
	std::cout << "ref�� ���� :"<<ref << std::endl;*/


	//return 0;
//}
