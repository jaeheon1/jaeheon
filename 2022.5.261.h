#pragma once
#include<iostream>
#include<vector>
#include<queue>
#include<stack>

int main()
{
	//������ ����
	/*
	// �迭 [0] [1] [2] [3] [4]
	int array[5] = { 0,1,2,3,4 };

	//pointer -----> [0]
	int* pointer = array;




	//std::cout <<"pointer�� ����Ű�� �ּ�:"<< pointer << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "pointer�� ����Ű�� �ּ�:" << pointer << std::endl;
		std::cout <<"array�� ��: "<< *pointer << std::endl;
		pointer++;
	}*/


	//Iterator

	/*
	std::vector<int>data = { 0,1,2,3,4 };

	std::vector<int>::iterator pointer;

	//iterator�� vector�� ���� �ּҸ� ����ŵ�ϴ�.
	pointer = data.begin();


	//iterator�� vector�� ������ �ּ�
	for (pointer = data.begin(); pointer != data.end(); ++pointer)
	{
		std::cout << *pointer << std::endl;
	}*/


	//�����̳� ����� 

	//Queue 
	/*
	//ť �����̳ʿ� 5���� �����͸� �����մϴ�.
	//[] [] []  []  []
	//ť �����̳� �ȿ� �ִ� ������ ����մϴ�.
	//front () ����ϸ鼭 ���Ҹ� �����ϸ� ��ü ���Ҹ� ��� ��ų �� �ֽ��ϴ�.
	//ť �����̳ʿ� �����Ͱ� �� �������� �ݺ����� �����մϴ�.
	std::queue<int> data;
	// <-[10]<-[10]
	data.push(10);
	data.push(20);
	data.push(30);
	data.push(40);
	data.push(50);





	//empty : ���� �����Ͱ� ����ִٸ� 1�� ��ȯ�մϴ�.
	//        ���� �����Ͱ� �ִٸ� 0�� ��ȯ�մϴ�.


	std::cout << data.front() << std::endl;
	data.pop();

	while (data.empty() != 1)
	{
		std::cout << data.front() << std::endl;
		data.pop();

   }
   */

   //stack
   /*
   std::stack<int>data;
   // [10]  [20]  [30]  [40]
   data.push(10);
   data.push(20);
   data.push(30);
   data.push(40);


   while (data.empty() != 1)
   {
	   std::cout << data.top() << std::endl;
	   data.pop();

   }
   */

   // puts �Լ� 


   /*
	   puts("League");
	   puts("of");
	   puts("Legend");
	   */






	return 0;
}