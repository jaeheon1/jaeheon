#pragma once
#include<iostream>
#include<set>
#include<string>
using namespace std;
/*
void Function(int x)
{
	std::cout << x << std::endl;
}
void Function(int x, int y)
{
	std::cout << x << "," << y << std::endl;
}

class Phone
{
public:
	Phone()
	{
		std::cout << "������~" << std::endl;
	}
	Phone(int x, int y)
	{
		call = x;
		size = y;
		std::cout << call << std::endl;
		std::cout << size << std::endl;
	}



private:
	int call;
	int size;



};
*/
/*
void Function(char x)
{
	std::cout << x << std::endl;

}
int Function(double x)
{
	return x;
}
double Function()
{

}
//�Լ��� �����ε����� ��ȯ���� ����� ���� �ʴ´�.

*/

int main()
{
	//set

	//std::map ->key�� value 
	//key �� Ȱ���ؼ� �����͸� Ȯ���մϴ�.+
	//set::set->key
	//key ���� �ߺ��� ������ �ʽ��ϴ�.
	// insert ���Ұ� �ڵ����� ���ĵ˴ϴ�. 

	/*
	std::set<int>data;
	std::set<int>::iterator iter;
	data.insert(10);
	data.insert(80);
	data.insert(40);
	data.insert(20);
	data.insert(60);

	for ( iter = data.begin(); iter != data.end(); iter++)
	{

		std::cout << *iter << std::endl;
	}

	iter = data.find(10);

	if (iter != data.end())
	{
		std::cout <<"�����Ͱ� �����մϴ�"<< std::endl;
	}
	else
	{
		std::cout << "�����Ͱ� �����ϴ�." << std::endl;
	}
	*/

	//** ������ �����ϴٺ��� OOP�� ���� �� �ȿɴϴ�.

	//������ 
	//1.�߻�ȭ 2.��� 3. ĸ��ȭ 4 ������ 
	// ���� 
	// ������     �����   ���� 

	//Sound()  Sound()   Sound()
	//[�۸�]    [�Ŀ�]       [�в�]




	//�Լ��� �����ε� 
	//�ٸ� �Ű��������� ���� ���� �̸��� �Լ��� ������ ���� �Ҽ� �ֽ��ϴ�.

	//Phone IPhone(10, 20);


	// O X ���� 
	//"OXOXOXOO"�� ���� ������ ������ �ܷΰ��� �ֽ����. 
	// �� �� ������ ������̰�,x�� Ʋ�� ���Դϴ�.
	// ������ �´� ���� �� ������ ������ �� �������� ���ӵ� O �� ������ �˴ϴ�. 
	//"OOXXOXXOOO"=1+2+0+0+1+0+0+1+1+3

	// �Է¹��� ���ڹ迭�� �����ϰ� 
	//���ϴ� OX�� �Է��ϼ���

	/*
	char quiz[10];
	std::string input;
	int sum = 0;
	int result = 0;

	cin >> quiz;

	for (int i = 0; i < quiz[i]; i++)
	{
		if (i == ' O')
			sum++;
		else
		{
			sum == 1;
		}
		sum += result;
	}
	std::cout << "���� :" << sum <<result << endl;
	*/

	/*
	int result = 0;
	std::string input;
	int count = 1;
	std::getline(std::cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i]== 'O')
		{
			result += count;
			count++;
		}
		else if(input[i]=='X')
		{
			count = 1;
		}

	}

	std::cout << "���� :" << result<< std::endl;
	*/
	// ������ε� �� �ڽ� �̿ܿ� �ٸ� ������� ������Ʈ�� �� �� ����. 



	return 0;

}