
/*#include<iostream>
#include<conio.h>
#include<windows.h>

//���� Ŭ���� =�θ� Ŭ���� 
//���� Ŭ���� =�ڽ�Ŭ����

// ����Ƽ 2019 
// ����Ƽ 2022 

class Monster
{
	//����
public:

	int x;
	int y;
	int z;
	void Death()
	{
		HP -= 10;
		std::cout << HP << std::endl;
	}

	//��ȣ
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
//��ġ (x,y,z)
//���� 
//HP �� Ȯ���� �� �ִ� �Լ� 
struct Object
{


	int x = 0; // �ɹ� ���� 
	int y = 0;
	int z = 0;

	int HP = 100;
	void Attack() //�ɹ� �Լ� 
	{
		std::cout << "����" << std::endl;
	}
	void Health()
	{
		std::cout << "���� ü���� HP �Դϴ�. " << HP << std::endl;
	}

};

//public (�ǵ������)

//private (�ǵ������)

//struct �� ���� �����ڸ� ���� ���� ���� ������ ���������ڰ� public���� �����Ǿ� �ֽ��ϴ�. 
//class ���� ���� ���� private���� �Ǿ� �־ ������ �Ҽ�����. ���� ���� �����ڸ� ���� ���� ������Ѵ�. 
//protected �� ��ӵ� ��ü�� �ƴϸ� ����������. 
//private �ȿ� �ִ°� �ǵ�������� �Լ��� ���Ǹ� �ؼ�  ��Ƴ����°� �����ϴ�. ���� �� ü���� ���.

int main()
{
	Object cube;

	Monster orc;



	//std::cout << cube.x << std::endl;
	//std::cout << cube.y << std::endl;
	//std::cout << cube.z << std::endl;


	// cube�� ü���� 0 ���Ϸ� ����� while ���� ���� �ǵ��� �����մϴ�. 
	// �����̽��� ���̹̰� 10�� ������ �����մϴ�.
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