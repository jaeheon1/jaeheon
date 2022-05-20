#pragma once
#include<string>
#include<iostream>
class Shape
{
public:

	Shape(int size, std::string name):m_size(size),m_name(name)
	{
		std::cout << m_size << std::endl;
		std::cout << m_name << std::endl;
	}



private:
	const int m_size=10;
	std::string m_name;

    

};

