//#include<iostream>
//#include<conio.h>
//#include<windows.h>
//
//
//
////채널이 100이 되면 다시 0번으로 돌아가게 설정합니다.
////스페이스를 누를 때 RemoteControl_UP() 함수가 호출 되도록 합시다
//
class TV
//{
//public:
//	void RemoteControl_UP()
//	{
//
//		if (channel <= 10)
//		{
//			channel++;
//
//			if (channel > 10)
//			{
//				channel = 0;
//
//			}
//
//		}
//		std::cout << "channel:" << channel << "번" << std::endl;
//	}
//
//private:
//	int channel = 0;
//
//	int volume = 0;
//};
//
//class Transportation
//{
//protected:
//	std::string name;
//
//	float speed = 0.0;
//	int wheel = 0;
//	int handle = 0;
//};
//
//class car :public Transportation
//{
//public:
//	void info()
//	{
//		speed = 100;
//		wheel = 4;
//		handle = 1;
//		name = "sonata";
//		std::cout << "name:" << name << std::endl;
//		std::cout << "speed:" << speed << std::endl;
//		std::cout << "wheel:" << wheel << std::endl;
//		std::cout << "handle:" << handle << std::endl;
//	}
//
//
//};
//class airplane :public Transportation
//{
//public:
//	void info1()
//	{
//		speed = 400;
//		wheel = 3;
//		handle = 1;
//		name = "KF15";
//		std::cout << "name:" << name << std::endl;
//		std::cout << "speed:" << speed << std::endl;
//		std::cout << "wheel:" << wheel << std::endl;
//		std::cout << "handle:" << handle << std::endl;
//
//
//	}
//
//};
//
//
//
//int main()
//{
//	//힙
//	//4byte 4byte 4byte 4byte 
//	//[   ]  [   ]   [    ]   [   ] 
//	//   0     1        2       3
//
//
//
//
//	//new는 메모리를 동적으로 할당하는 연산자 입니다. 
//	// 힙 영역에 메모리가 4바이트 저장이되고 10이라는 값을 저장합니다. 
//	int* ptr = new int(10);
//	*ptr = 100;
//	std::cout << "ptr이 가리키는 값은 :" << *ptr << std::endl;
//
//	// 스택 
//	//  4byte
//	//[ [ptr]              ]
//	//
//	//힙 
//	//[   [][][][][][][]][][][]         ]
//
//
//
//	//추상화 
//	/*TV Lg_TV;
//
//	Lg_TV.RemoteControl_UP();
//
//	airplane A10;
//
//	car B10;
//
//
//
//
//
//	while (1)
//	{
//		if (GetAsyncKeyState(VK_RIGHT))
//		{
//			B10.info();
//			Sleep(100);
//		}
//		if (GetAsyncKeyState(VK_LEFT))
//		{
//				A10.info1();
//
//				std::cout << std::endl;
//
//
//
//				Sleep(100);
//
//		}
//		if (GetAsyncKeyState(VK_SPACE))
//		{
//			Lg_TV.RemoteControl_UP();
//			Sleep(100);
//		}
//	}*/
//
//
//
//
//
//	return 0;
//
//}
