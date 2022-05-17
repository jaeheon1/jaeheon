#include<iostream>
#include"Book.h"





class Person
{
public:
	//생성자 
	Person()
	{
		std::cout << "Create Person" << std::endl;
	}

	~Person()
	{
		std::cout << "Delete Person" << std::endl;
	}

	void Info()
	{
		std::cout << age << std::endl;
		std::cout << weight << std::endl;
		std::cout << name << std::endl;
	}





	int age;
	float weight;
	std::string name;


};


int main()
{

	Book naver;

	naver.Read();

	naver.Write();





	//객체 할당
	/*Person* man = new Person();

	std::cout << sizeof(Person) << std::endl;

	Person girl;
	Person 이라는 객체는 생성이 되었다? ㅇ  

	man->age = 20;
	man->weight = 70.5;
	man->name = "kimGeumsoo";
	man->Info();

	delete man;
	*/



	// 동적 할당 배열
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
		std::cout << "ptr변수가 가리키는 주소" << &ptr[i] << std::endl;
	}

	//동적 할당을 했을 때 배열 형태로 메로리를 할당하게 되면 메모리를 헤제할 때 배열 형태로 해제해주어야합니다. 


	delete []ptr;
	for (int i = 0; i < 3; i++)
	{
		std::cout << ptr[i] << std::endl;
		std::cout << "ptr변수가 가리키는 주소" << &ptr[i] << std::endl;
	}

	// 스택       힙
	//ptr-------> 
	//이미 해제된 메모리를 가리키는 포인터 입니다.*/



	//참조 연산자 
	/*int variable = 300;
	int value = 10;
	int& ref = value;
	ref = variable;
	ref = 1000;

	std::cout << "value의 값은 : "<<value << std::endl;
	std::cout << variable << std::endl;
	std::cout << "ref의 값은 :"<<ref << std::endl;*/


	return 0;
}