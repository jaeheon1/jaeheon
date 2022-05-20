#pragma once
#include<iostream>


using namespace std;
class Color
{

private:


	int m_black;
	int m_white;
	int m_blue;









public:

	Color(int black, int white, int blue):m_black(black),m_white(white),m_blue(blue)
	{
		cout << " black =" << black << endl;
		cout << " white =" << white << endl;
		cout << " blue  =" << blue << endl;
	}
	~Color()
	{

	}



};

