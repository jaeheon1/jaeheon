#include "Book.h"
#include<iostream>

void Book::Read()
{
	std::cout << page << std::endl;
	std::cout << name << std::endl;
	std::cout << price << std::endl;
}

void Book::Write()
{
	std::cout << "�� å�� ���� �� �� �����ϴ�. " << std::endl;
}
