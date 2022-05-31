#include<iostream>
#include<string>
using namespace std; 

//일반 가상함수
class Pen
{
	//순수 가상함수
	virtual void Drawing()=0;

};
class Circle :public Pen
{
public:
	void Drawing()
	{
		cout << "동그라미" << endl; 
	}
};
class Star :public Pen
{
public:
	void Drawing()
	{
		cout << "별" << endl;
	}
};
class Rectangle :public Pen
{
public:
	void Drawing()
	{
		cout << "세모" << endl;
	}

};


//일반 가상함수
class Animal
{
public:
	virtual void Sound()
	{
		cout << "울음소리~" << endl;
	}



private:
	
	int mouth;
int eye;
int leg;

};
class dog :public Animal
{
public:
	//가상함수(virtual)
	void Sound()
	{
		cout << "멍멍" << endl;
	}
};
class cat :public Animal
{
public:
	void Sound()
	{
		cout << "냐옹~" << endl;
	}
};
class duck :public Animal
{
public:
	void Sound()
	{
		cout << "꽥꽥~" << endl;
	}
};




int main()
{
	/*
	//생성자 가능하고 , 함수에도 오버로딩 가능했어요.
	// 같은 이름의 함수를 여러 개 정의 할 수 있어요. (매개 변수 자료형이나 갯수에 따라 함수의 오버로딩을 할수 있었어요. )

	//Function(int x) ----- > 정수
	//Function(char x)------문자
	//Function(double x)   ----실수
	*/
	//다형성 

	//[] animal 

	// [] [] []

	// dog cat duck 

	//가상함수 
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
	//컴파일러는 함수를 호출할 때 복잡한 과정이 있기 때문에 함수를 호출하는 코드는
	//컴파일 시점에 고정된 메모리 주소로 변환시킵니다.(정적 바인딩)

	//정적 바인딩: 컴파일 시점에 함수를 결정합니다.
	//동적 바인딩 :런타임 시점에 함수를 결정합니다.
	*/

	//순수 가상 함수
	//하위 클래스 반드시 재정의 되어야 하는 맴버 함수 

	/*
	Star* star = new Star;
	star->Drawing();

	Rectangle *rectangle = new Rectangle;
	rectangle->Drawing();

	Circle* circle = new Circle;
	circle->Drawing();
	*/


	//프로그래머스 2~3 단계(회사 코딩테스트난이도는 2~3) (4 단계)
	//완벽한 문자열 판별하기

	//문자를 입력합니다.
	//문자를 입력했을때 숫자가 들어가게 되면 ex)완벽한 문자열이 아닙니다. 
	//문자를 입력 했을때 숫자가 들어가지 않으면 ex>완벽한 문자열입니다.



	std::string str;
	std::getline(std::cin, str);
	int a = 0;
	int count = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i]> char(48) && str[i]< char(57))
		{
			
			count++;
        }
		
	}
	if (count > 0)
	{
		cout << "완벽한 문자열이 아닙니다" << endl;
	}
	else
	{
		cout << "완벽한 문자열이 맞습니다" << endl;
	}
	


	return 0;
}