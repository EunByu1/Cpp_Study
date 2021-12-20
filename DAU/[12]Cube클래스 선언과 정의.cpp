#include<iostream>

using namespace std;    // std:: -> C++ 표준에서 정한 표준이름공간 (iostream 내의 모든 클래스/함수에 적용)
      
class Circle    // 클래스 선언  
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
	Cube();				// [ 생성자 ]
	Cube(int iWidth, int iHeight , int iDepth);
	~Cube();			// [ 소멸자 ] 
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

int main()
{
//--------------------------------------------
//-----------Circle class 객체---------------- 
	Circle circle1;
	circle1.iRadius = 1;
	cout << "Circle1 area is " << circle1.getArea() << endl;
//--------------------------------------------

	cout << endl << endl;

//--------------------------------------------
//-----------Rectangle class 객체-------------
	Rectangle rect1;
	rect1.iHeight = 10;
	rect1.iWidth  = 10;
	cout << "rect1 area is " << rect1.getArea() << endl;
	 
	Rectangle rect2;
	rect2.iHeight = 78;
	rect2.iWidth  = 678;
	cout << "rect2 area is " << rect2.getArea() << endl;
//--------------------------------------------

	cout << endl << endl;

//--------------------------------------------
//-----------Cube class 객체------------------
	Cube cube1;
	cout << "cube1 volume is " << cube1.getvolume() << endl;
	
	Cube cube2(5,8,10);
	cout << "cube2 volume is " << cube2.getvolume() << endl;
	
	cube1.change(12,12,12);
	cube2.change(7,8,9);
	cout << endl << endl;
	cout << "cube1 volume is " << cube1.getvolume() << endl;
	cout << "cube2 volume is " << cube2.getvolume() << endl;
//--------------------------------------------
	
    return 0; 
}
