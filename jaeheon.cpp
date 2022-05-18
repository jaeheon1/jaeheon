#include<iostream>
#include"Model.h"  //Model Class 가 들어옵니다. 
int main()
{
	
	/*int* ptr = new int(10);

	std::cout << *ptr << std::endl;
	std::cout << ptr << std::endl;

	delete ptr;
	// stack
	//ptr ------->[][][][]
	
	std::cout << ptr << std::endl;*/

	Model Character(10, 30, "wizard");

	Model Monster = Character;

	

	//std::cout << "Character의 주소:" << &Character << std::endl;
	//std::cout <<"Monster의 주소: "<< &Monster << std::endl;





	return 0;

}