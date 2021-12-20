#ifndef MYTRUECLASS
#define  MYTRUECLASS

#include<iostream>
using namespace std;
//Circle Ŭ����  
class Circle
{
public:
	int iRadius;
	float getArea();
};

//Rectangle Ŭ���� 
class Rectangle
{
public:
	int iWidth, iHeight;
	float getArea();
};

//CubeŬ����
class Cube
{
	int iWidth, iHeight, iDepth;
public:
	float getvolume();
	Cube();				//������
	Cube(int iWidth, int iHeight , int iDepth);
	~Cube();			//�Ҹ���  
	void change(int iWidth, int iHeight, int iDepth);
};

void Cube::change(int iWidth, int iHeight, int iDepth)
{
	this->iWidth = iWidth;
	this->iHeight=iHeight;
	this->iDepth = iDepth;
}
Cube::Cube()
{
	iWidth = 10;
	iHeight = 10;
	iDepth = 10;
}
Cube::~Cube()
{
}
//���簢�� ����
float Cube::getvolume()
{
	return iWidth*iHeight*iDepth;
} 
Cube::Cube(int iWidth,int iHeight,int iDepth)
{
	this->iWidth = iWidth;
	this->iHeight=iHeight;
	this->iDepth = iDepth;
}

//���簢�� ����
float Rectangle::getArea()
{
	return iWidth*iHeight;
}
 
float Circle::getArea()
{
	return 3.14*iRadius*iRadius;
}
#endif

