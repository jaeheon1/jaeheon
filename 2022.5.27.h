#pragma once
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	//map container 
	/*
	// ��� ����� �����̳� �����Դϴ�.
	// [key] [value]
	//name          price
	//[sword] -----[1000]
	//[armor] -----[300]
	//[sword]x -----[value] key���� �ߺ��� ������ �ʽ��ϴ�.
	//[Gloves] -----[1000]
	//[key] -----[value]

	//���� ���� Ư���� ���� �ֱ� ���ؼ� map�� ����Ǿ� �ִ� key���� �˻��� ���ֽø� �˴ϴ�.
	//map�� � ������ �Ǿ��ֳ���
	// ���� �� Ʈ�� ������ �Ǿ� �ֽ��ϴ�.
	//���� �� Ʈ�� :�ڰ� ���� ���� Ž�� Ʈ���ν� ���԰� ������ �Ͼ�� ��� �ڵ����� �� ���̸� �۰� ���� �ϴ�
	//������ ���� �������� Ʈ���� ���̰� �������� ġ��ġ�� ���� ���� ���� ���ؼ� �Դϴ�.
	*/

	//map 
	/*
	std::map<std::string, int>data;
							 //������ �̸� <->�������� ����
	data.insert(std::make_pair("sword", 1000));
	data.insert(std::make_pair("armar", 500));
	data.insert(std::make_pair("shoes", 750));

	//         [shoes]
	//[armor]            [sword]

	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout <<"Key : "<< iter->first<<" ";
		std::cout <<"Value : "<< iter->second << std::endl;
	}
	data.erase("shoes");
	//std::cout << data.find("shoes")->second << std::endl;
	std::cout << data.find("sword")->second << std::endl;
	std::cout << data.find("armar")->second << std::endl;
	*/

	//���ĺ� ����
	//�� ���ĺ��� �ܾ ��� ���ԵǾ� �ִ� �� ���ϴ� ���α׷��Դϴ�. 

	//���� �Է� -> academy
	//            a b c d e  f g h i j  k l n m o  p q r s t  u v w x y z 
	//���� ��� -> 2 0 1 1 1  0 0 0 0 0  0 0 0 1 0  0 0 0 0 0  0 0 0 0 0 0  

	/*
	std::string value;
	int result = 0;

	std::getline(std::cin, value);

	//std::cout << value.length();
	*/



	/*
	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < value.length(); j++)
		{
			if (value[j] == (char)i)
			{
				result++;
			}
		}
		std::cout << result << std::endl;

		result = 0;

	}

	return 0;
}
*/