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
		std::cout << "따르릉~" << std::endl;
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
//함수의 오버로딩으로 반환형은 고려가 되지 않는다.

*/

int main()
{
	//set

	//std::map ->key와 value 
	//key 을 활용해서 데이터를 확인합니다.+
	//set::set->key
	//key 값이 중복이 허용되지 않습니다.
	// insert 원소가 자동으로 정렬됩니다. 

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
		std::cout <<"데이터가 존재합니다"<< std::endl;
	}
	else
	{
		std::cout << "데이터가 없습니다." << std::endl;
	}
	*/

	//** 실제로 개발하다보면 OOP가 감이 잘 안옵니다.

	//다형성 
	//1.추상화 2.상속 3. 캡슐화 4 다형성 
	// 동물 
	// 강아지     고양이   오리 

	//Sound()  Sound()   Sound()
	//[멍멍]    [냐옹]       [꽥꽥]




	//함수의 오버로딩 
	//다른 매개변수들을 가진 같은 이름의 함수를 여러개 정의 할수 있습니다.
	
	//Phone IPhone(10, 20);


	// O X 퀴즈 
	//"OXOXOXOO"와 같은 오엑스 퀴즈의 겨로가가 있스빈다. 
	// ㅇ 는 무제를 맞춘것이고,x는 틀린 것입니다.
	// 문제를 맞는 경우는 그 문제의 점수는 그 문제까지 연속된 O 의 개수가 됩니다. 
	//"OOXXOXXOOO"=1+2+0+0+1+0+0+1+1+3

	// 입력받을 문자배열을 선언하고 
	//원하는 OX를 입력하세요

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
	std::cout << "합은 :" << sum <<result << endl;
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

	std::cout << "합은 :" << result<< std::endl;
	*/
// 비공개인데 나 자신 이외에 다른 사람들은 프로젝트를 볼 수 없다. 



	return 0;

}