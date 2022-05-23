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

		std::cout << "x의 값: " << this->x << std::endl;
		std::cout << "y의 값: " << this->y << std::endl;
		std::cout << "z의 값: " << this->z << std::endl;
	}

	void Address();
	

	


private:

	int x;
	int y;
	int z;

};

