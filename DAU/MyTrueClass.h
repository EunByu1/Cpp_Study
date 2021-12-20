#ifndef MYTRUECLASS
#define  MYTRUECLASS

#include<iostream>
using namespace std;
//Circle 클래스  
class Circle
{
public:
	int iRadius;
	float getArea();
};

//Rectangle 클래스 
class Rectangle
{
public:
	int iWidth, iHeight;
	float getArea();
};

//Cube클래스
class Cube
{
	int iWidth, iHeight, iDepth;
public:
	float getvolume();
	Cube();				//생성자
	Cube(int iWidth, int iHeight , int iDepth);
	~Cube();			//소멸자  
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
//직사각형 넓이
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

//직사각형 넓이
float Rectangle::getArea()
{
	return iWidth*iHeight;
}
 
float Circle::getArea()
{
	return 3.14*iRadius*iRadius;
}
#endif

