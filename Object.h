#pragma once
#include<iostream>
class Object
{
public:
	Object(int x,int y,int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;

		std::cout << "x�� ��: " << this->x << std::endl;
		std::cout << "y�� ��: " << this->y << std::endl;
		std::cout << "z�� ��: " << this->z << std::endl;
	}

	void Address();
	

	


private:

	int x;
	int y;
	int z;

};

