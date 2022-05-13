
/*#include<iostream>
#include<conio.h>
#include<windows.h>

//상위 클래스 =부모 클래스 
//하위 클래스 =자식클래스

// 유니티 2019 
// 유니티 2022 

class Monster
{
	//공개
public:

	int x;
	int y;
	int z;
	void Death()
	{
		HP -= 10;
		std::cout << HP << std::endl;
	}

	//보호
protected:

	int money = 100;
private:
	int HP = 100;


	void Attack()
	{
		std::cout << "Attack" << std::endl;
	}
};

class Child_Monster :public Monster
{
public:
	void Speaking()
	{
		std::cout << "Hello" << std::endl;
		std::cout << money << std::endl;
	}

};

//[]
//위치 (x,y,z)
//공격 
//HP 를 확인할 수 있는 함수 
struct Object
{


	int x = 0; // 맴버 변수 
	int y = 0;
	int z = 0;

	int HP = 100;
	void Attack() //맴버 함수 
	{
		std::cout << "공격" << std::endl;
	}
	void Health()
	{
		std::cout << "현재 체력은 HP 입니다. " << HP << std::endl;
	}

};

//public (건들수있음)

//private (건들수없음)

//struct 는 접근 지정자를 따로 설정 하지 않으면 접근지정자가 public으로 설정되어 있습니다. 
//class 같은 경우는 모든게 private으로 되어 있어서 접근을 할수없다. 따라서 접근 지정자를 따로 설정 해줘야한다. 
//protected 는 상속된 객체가 아니면 쓸수가없다. 
//private 안에 있는건 건들수없지만 함수로 정의를 해서  깍아내리는건 가능하다. 예를 들어서 체력을 깎기.

int main()
{
	Object cube;

	Monster orc;



	//std::cout << cube.x << std::endl;
	//std::cout << cube.y << std::endl;
	//std::cout << cube.z << std::endl;


	// cube의 체력을 0 이하로 만들면 while 문이 종료 되도록 설정합니다. 
	// 스페이스를 데이미가 10씩 들어가도록 설정합니다.
	while (1)
	{
		/*if (GetAsyncKeyState(VK_SPACE))
		{
			Sleep(50);
			cube.HP -= 10;
			cube.Health();
		}
		if (cube.HP <= 0)
		{
			break;
		}

		if (GetAsyncKeyState(VK_SPACE))
		{
			orc.Death();
			//orc.Breaking();
			Sleep(100);



		}


	}
}
*/