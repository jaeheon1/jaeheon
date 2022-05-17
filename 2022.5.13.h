///*#include<iostream>
//#include<conio.h>
//#include<windows.h>
///*class Animal
//{
//public:
//
//	void Sound()
//	{
//
//	}
//};
//class Dog:public Animal
//{
//	void Sound()
//	{
//		std::cout << "멍멍" << std::endl;
//	}
//};
//class Cat :public Animal
//{
//	void Sound()
//	{
//		std::cout << "야옹" << std::endl;
//	}
//}; */
////기본 매개변수  == 사용할때 오른쪽 부터 사용해야된다.
//void Function(int x, int y, int z = 20)
//{
//	//std::cout << x<< std::endl;
//	//std::cout << y << std::endl;
//	//std::cout << z << std::endl;
//}
//int main()
//{
//
//	//x=10;y=20;
//	//기본 매개변수는 함수를 호출할때 매개변수에 값이 있기 대문에 인수를 넣어주지 않아도 함수를 호출할 수 있습니다. 
//	// 매개변수 순서가 함수를 호출할 때는 왼쪽에서 부터 오른쪽으로 값이 저장됩니다. 
//	//기본 매개 변수를 왼쪽부터 정의하게 되면 매개변수 어디를 정장해야되는지 모르는 상황이 발생합니다. 
//	Function(100, 100);
//	//bool : 1바이트 크기의 자료형으로 true와 false 값만 저장할수 있습니다. 
//	bool condition = true;
//
//	// 변수를 저장할 때 자료형 명시적으로 입력했습니다. 
//	auto value = "dd";
//
//	//게임이 종료될 때(false),게임이 실행될 때(true)
//
//	/*while (condition)
//	{
//		std::cout << value << std::endl;
//		if (GetAsyncKeyState(VK_SPACE))
//		{
//			condition = false;
//		}
//	}*/
//
//	//회문 판별
//
//	//eye (회문입니다.)
//
//
//
//	//[e]<- [y]-> [e]
//	//문자가 서로 같으면 임시 변수를 증가 시킵니다. 
//	//그리고 최종적으로임시 변수와 내가 선언한 문자열의 크기 -1/2랑 같다면 회문입니다. 
//
//	//league (회문이 아닙니다.)
//
//	int result = 0;
//
//	char array[] = { "level" };
//
//	//std::cout << array[0] << std::endl; //l
//	//std::cout << array[1] << std::endl; //e
//	//std::cout << array[2] << std::endl; //v
//	//std::cout << array[3] << std::endl; //e
//	//std::cout << array[4] << std::endl; //l
//
//
//
//	//sizeof(array)
//	for (int i = 0; i < (sizeof(array) - 1) / 2; i++)
//	{
//
//		if (array[i] == array[sizeof(array) - 2 - i])
//		{
//			result++;
//		}
//
//	}
//	if (result == sizeof(array) - 1 / 2)
//	{
//		std::cout << "회문입니다" << std::endl;
//	}
//	else
//	{
//		std::cout << "회문이 아님니다." << std::endl;
//	}
//}
