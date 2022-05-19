#pragma once
#include<iostream>
#include<string>



class Model
{
public:

	Model(int size,int mesh,const char *name) 
	{
		m_size = new int(size);// 10 , 100, wizard 
		                       //m_size ------->[0] [1] [2] [3]4 byte (10)
		m_mesh = mesh;
		m_name = name;// 1 byte 메모리 100개 생성
		
		std::cout << m_size << std::endl;
		std::cout << m_mesh << std::endl;
		std::cout << m_name << std::endl;
	}
	~Model()
	{
		//동적 할당 메모리를 해제
		
		delete m_size;

		std::cout << "객체가 소멸되었습니다." <<m_name<< std::endl;
	}

	Model(const Model &model)
	{
		m_size=new int(*model.m_size);//[0] [1] [2] [3]4 byte (10)
		m_mesh=model.m_mesh;
		m_name=model.m_name;

		std::cout << "복사 생성자 호출" << std::endl;
	}



private:
	int *m_size;

	int m_mesh;

	const char * m_name;
	
};

