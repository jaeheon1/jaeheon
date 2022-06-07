#include<iostream>
using namespace std;
//가상 상속
/*
class A
{
public:
	int A_value = 10;
};

class B :virtual public A
{
public:
	int B_value = 20;

};

class C :virtual public A
{
public:
	int C_value = 30;
};

class D:  public B, public C

{
public:
	int D_value = 50;
};
*/

//템플릿
// 함수나 클래스를 개별적으로 다시 작성하지 않아도 , 여러 자료형으로 사용 할 수 있도록 만들어 진 기능입니다. 

/*
int Integer_Add(int x, int y)
{
	return x + y;
}

float float_Add(float x, float y)
{
	return x + y; 
}


//함수의 기능은 명확 하지만 , 자료형을 모호하게 설정하는 것입니다. 
template<typename T>
T Add(T x , T y)
{
	return x + y;
}
*/
int main()

{
	// 다중 상속 

	// 다이아몬드 처럼 다중 상속 기반 클래스가 같은 기반 클래스를 상속 받아서 구현된 경우 동일한 맴버를 이중 상송 
	// 반지 않도록 가상 상속을 사용해야합니다. 


	//A 클래스이 맴버 변수 A_Value가 B 와 C  클래스로 상속 받은 상태이기 때문에 접근 모호해서 오류가 발생합니다. 

	// 다이아몬드상속 
	/*
	D D_object;
	D_object.A_value = 20;
	*/

	//B 와C 를 가상 상속으로 바꿔주면 한 군데에서만 상속을 보장 받을 수 있도록 설정 할 수 있습니다.  

	//가상 상속
	/*
	D D_object;
	D_object.A_value = 1000;

	cout << D_object.A_value << endl;
	*/

	//std::cout << Integer_Add(10, 10) << std::endl;
	//std::cout << float_Add(7.65, 8.11) << std::endl;

	//템플릿
	/*
	cout << Add<int>(5, 5) << endl;
	cout << Add<float>(5.24, 10.34) << endl;
	*/


	return 0; 
}