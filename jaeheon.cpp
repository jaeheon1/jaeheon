#include<iostream>

using namespace std;



namespace A_SPACE
{
	int value = 100;


	void Function()
	{
		cout << "A Space " << endl;

	}
}
namespace B_SPACE
{
	int value = 200;

	void Function()
	{
		cout << "B Space " << endl;
	}
	namespace B_COPY_SPACE
	{
		int value = 809;
	}

}
// 1. 멤버 초기화 리스트 
// 원하는 클래스 ()를 생성합니다.
//속성(int size) private 를생성합니다. 
//생성자를 통해서 속성 int siz 초기화 합니다.(원하는 데이터 넣기)
//초기화 맴버 리스트를 이용해서 초기화하면 됩니다. 
using namespace B_SPACE;

using namespace A_SPACE;

int main()
{
	// 범위 기반 반복문
	/* 시작점과 끝점을 알려주지 않아도 처음부터 끝까지 순회를 해주는 반복문 입니다.
	//                 0    1    2    3    4
				   // [1]  [2]  [3]  [4]  [5]
	// 데이터 타입 <- int , char, double
	// 변수 이름 <
	//데이터 리스트 -> 배열


	//int array[5] = { 1,2,3,4,5 };
	//double data[5] = { 10.6,8.75,6.33,1.23,4.41 };

	//범위 기반 반복문은 데이터 리스트의 요소에  접근할 수 없습니다
	//데이터 리스트 (array, data) 요소를 Element변수에 복사를 하기 때문에 요소에 접근할 수 없다.
	// 복사를 했으므로 복사 비용이 발생합니다.
	//const 를 사용하게 되면 element의 값을 변경할 수 없다.
	//[30]-> [30]-> [30]-> [30]-> [30]
	for (auto &Element : array)
	{
		Element = 100;
		cout << Element << endl;
	}
	*/

	//범위 지정 연산자 
	// 이름 공간에서 식별자를 지정해주는 연산자입니다. 

	/*cout << A_SPACE::value << endl;
	cout << value << endl;
	A_SPACE::Function();
	B_SPACE::Function();

	cout << B_SPACE::B_COPY_SPACE::value;
	*/
	return 0;
}