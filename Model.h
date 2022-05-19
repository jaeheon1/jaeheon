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
		m_name = name;// 1 byte �޸� 100�� ����
		
		std::cout << m_size << std::endl;
		std::cout << m_mesh << std::endl;
		std::cout << m_name << std::endl;
	}
	~Model()
	{
		//���� �Ҵ� �޸𸮸� ����
		
		delete m_size;

		std::cout << "��ü�� �Ҹ�Ǿ����ϴ�." <<m_name<< std::endl;
	}

	Model(const Model &model)
	{
		m_size=new int(*model.m_size);//[0] [1] [2] [3]4 byte (10)
		m_mesh=model.m_mesh;
		m_name=model.m_name;

		std::cout << "���� ������ ȣ��" << std::endl;
	}



private:
	int *m_size;

	int m_mesh;

	const char * m_name;
	
};

