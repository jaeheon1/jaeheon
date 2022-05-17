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
	std::cout << "이 책에 글을 쓸 수 없습니다. " << std::endl;
}
