#pragma once
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	//map container 
	/*
	// 노드 기반의 컨테이너 구조입니다.
	// [key] [value]
	//name          price
	//[sword] -----[1000]
	//[armor] -----[300]
	//[sword]x -----[value] key값에 중복이 허용되지 않습니다.
	//[Gloves] -----[1000]
	//[key] -----[value]

	//게임 내에 특정한 값을 넣기 위해서 map에 저장되어 있는 key으로 검색을 해주시면 됩니다.
	//map은 어떤 구조로 되어있나요
	// 레드 블랙 트리 구조로 되어 있습니다.
	//레드 블랙 트리 :자가 균형 이진 탐색 트리로써 삽입과 삭제가 일어나는 경우 자동으로 그 높이를 작게 유지 하는
	//이유는 연산 과정에서 트리의 높이가 한쪽으로 치우치는 것을 방지 하지 위해서 입니다.
	*/

	//map 
	/*
	std::map<std::string, int>data;
							 //아이템 이름 <->아이템의 가격
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

	//알파벳 갯수
	//각 알파벳이 단어에 몇개가 포함되어 있는 지 구하는 프로그램입니다. 

	//예제 입력 -> academy
	//            a b c d e  f g h i j  k l n m o  p q r s t  u v w x y z 
	//예제 출력 -> 2 0 1 1 1  0 0 0 0 0  0 0 0 1 0  0 0 0 0 0  0 0 0 0 0 0  

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